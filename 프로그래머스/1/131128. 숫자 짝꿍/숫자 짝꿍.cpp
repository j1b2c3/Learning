#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int X_count[10] = {0};
    int Y_count[10] = {0};


    for (char c : X){
        X_count[c - '0']++;
    }
    for (char c: Y){
        Y_count[c - '0']++;
    }
    for (int i = 9; i >= 0; i--){
        int count = min(X_count[i], Y_count[i]);
        answer.append(count, i + '0');
    }

    if (answer == "") return "-1";
    if (answer[0] == '0') return "0";
       
    return answer;
}