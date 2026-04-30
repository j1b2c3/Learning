#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int min_i = wallpaper.size();
    int min_j = wallpaper[0].size();
    int max_i = 0;
    int max_j = 0;
    
    for (int i = 0; i < wallpaper.size(); i++){
        for (int j = 0; j < wallpaper[i].size(); j++){
            if (wallpaper[i][j] == '#'){
                min_i = min(i, min_i);
                min_j = min(j, min_j);
                max_i = max(i, max_i);
                max_j = max(j, max_j);
            }
        }
    }
    
    answer.push_back(min_i);
    answer.push_back(min_j);
    answer.push_back(max_i + 1);
    answer.push_back(max_j + 1);
    
    return answer;
}