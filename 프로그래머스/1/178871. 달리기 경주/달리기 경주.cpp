#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> nameMap;
    for (int i = 0; i < players.size(); i++){
        nameMap[players[i]] = i;
    }
    
    for (int j = 0; j < callings.size(); j++){
        int cur = nameMap[callings[j]];
        string prev = players[cur - 1];
        
        swap(players[cur], players[cur-1]);
        nameMap[callings[j]] = cur - 1;
        nameMap[prev] = cur;
    }
    
    
    return players;
}