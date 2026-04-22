#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> min_presses;
    
    for (string& key : keymap){
        for (int i = 0; i < key.length(); i++){
            char c = key[i];
            int count = i + 1;
            
            if (min_presses.find(c) == min_presses.end() || min_presses[c] > count){
                min_presses[c] = count;
            }
        }
    }
    
    for (string& target : targets){
        int total = 0;
        bool find = true;
        
        for (char c : target){
            if (min_presses.find(c) == min_presses.end()){
                find = false;
                break;
            }
            total += min_presses[c];
        }
        answer.push_back(find ? total : -1);
    }
    
    return answer;
}