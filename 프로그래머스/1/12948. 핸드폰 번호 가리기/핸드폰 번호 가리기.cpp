#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int num = phone_number.size();
    for (int i = 0; i < (num -4); i++ ){
        answer.push_back('*');
    }
    for (int i = (num -4); i < num; i++){
        answer.push_back(phone_number[i]);
    }
        
    return answer;
}