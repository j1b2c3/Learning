#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    vector<bool> is_skip(26,false);
    for (char c : skip){
        is_skip[c - 'a'] = true;
    }
    
    
    for (char c : s){
        int count = 0;
        char current = c;
        
        while (count < index){
            current++;
            if (current > 'z'){
                current = 'a';
            }
            
            if (!is_skip[current - 'a']){
                count++;
            }
        }
        answer += current;
    }
    
    
    return answer;
}