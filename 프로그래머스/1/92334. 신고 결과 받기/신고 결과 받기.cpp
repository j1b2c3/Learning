#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, int> reported_count;
    unordered_map<string, set<string>> reported_list;
    
    
    for (string& s : report){
        stringstream ss(s);
        string from, to;
        ss >> from >> to;
        
        if (reported_list[from].find(to) == reported_list[from].end()){
            reported_list[from].insert(to);
            reported_count[to]++;
        }
    }
    
    for (string& id : id_list){
        int count = 0;
        for (const string& target : reported_list[id]){
            if (reported_count[target] >= k){
                count++;
            }
        }
        answer.push_back(count);
    }
    
    return answer;
}