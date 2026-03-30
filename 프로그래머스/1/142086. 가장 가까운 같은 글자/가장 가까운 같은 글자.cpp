#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int k = -1;
    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < i; j++){
            if (s[j] == s[i]){
                k = i - j;
            }
        }
        answer.push_back(k);
        k = -1;
    }
    
    return answer;
}