#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string left = "";
    
    for (int i = 1; i < food.size(); i++){
        int count = food[i] / 2;
        if (count > 0) {
            left += string(count, i + '0');
        }
    }
        
    string right = left;
    reverse(right.begin(), right.end());
    answer = left + '0' + right;
    
    return answer;
}