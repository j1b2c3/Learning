#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for (int i = 0; i < commands.size(); i++){
        vector<int> newarr = {};
        for (int j = commands[i][0] - 1; j < commands[i][1]; j++){
            newarr.push_back(array[j]);
        }
        sort(newarr.begin(), newarr.end());
        int k = commands[i][2] - 1;
        answer.push_back(newarr[k]);
    }
    
    return answer;
}