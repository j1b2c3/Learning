#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    bool bIsNewWord = true;

    for (char c : s) {
        if (c == ' ') {
            answer += c;
            bIsNewWord = true;
        } else {
            if (bIsNewWord) {
                answer += toupper(c);
                bIsNewWord = false;
            } else {
                answer += tolower(c);
            }
        }
    }

    return answer;
}