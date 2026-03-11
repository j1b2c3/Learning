#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num = s.size();
    int mid = num/2;
    if (num % 2 == 0){
        answer = s[mid - 1];
        answer += s[mid];
    }
    else
        answer = s[mid];
    
    return answer;
}