#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if (s.size() != 4 && s.size() != 6){
        answer = false;
        return answer;   
    }
    
    for (char c : s){
        if (!isdigit(c)){
        answer = false;
        return answer;
        }
    }
    return answer;
}