#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string temp = "";
    
    string words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = 0; i < s.length(); ) {
        if (isdigit(s[i])) {
            temp += s[i];
            i++;
        } 
        else {
            for (int j = 0; j < 10; j++) {
                if (s.substr(i, words[j].length()) == words[j]) {
                    temp += to_string(j);
                    i += words[j].length();
                    break;
                }
            }
        }
    }
    
    return stoi(temp);
}