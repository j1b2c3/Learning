#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int count = 0;
    int zero_count = 0;
    
    while (s != "1"){
        string temp = "";
        // 0제거
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '1'){
                temp += '1';
            }
            else{
                zero_count++;
            }
        }
        
        // 길이 이진 변환
        int temp_len = temp.length();
        temp = "";
        while(temp_len > 0){
            temp = (temp_len % 2 == 0 ? "0" : "1") + temp;
            temp_len /= 2;
        }
        s = temp;
        count++;
    }
    
    answer.push_back(count);
    answer.push_back(zero_count);
    
    return answer;
}