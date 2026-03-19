#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int t_len = t.length();
    int p_len = p.length();
    
    long long p_num = stoll(p);
    
    for (int i = 0; i <= t.length() - p.length(); i++){
        string sub = t.substr(i, p_len);
        
        long long num = stoll(sub);
        
        if (num <= p_num) 
            answer++;
    }
    
    return answer;
}