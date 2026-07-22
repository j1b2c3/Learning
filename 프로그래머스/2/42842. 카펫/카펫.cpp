#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    for (int i = 1; i * i <= yellow; i++){
        if (yellow % i == 0){
            int temp = yellow / i;
           if (2 * (i + temp) + 4 == brown){
               answer.push_back(temp + 2);
               answer.push_back(i + 2);
               break;
           }
        }
    }
    
    return answer;
}