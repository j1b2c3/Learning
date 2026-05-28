#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    int num;
    
    ss >> num;
    int min = num;
    int max = num;
    
    while (ss >> num){
        if (num < min){
            min = num;
        }
        if (num > max){
            max = num;
        }
    }
    
    answer = to_string(min) + " " + to_string(max);
    
    return answer;
}