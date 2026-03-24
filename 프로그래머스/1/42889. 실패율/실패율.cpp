#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> stg;
    
    double t_players = stages.size();
    
    vector<int> count(N+2, 0);
    for (int s : stages){
        count[s]++;
    }
    
    for (int i = 1; i <= N; i++){
        if (t_players > 0){
            double rate = (double) count[i] / t_players;
            stg.push_back({i, rate});
            t_players -= count[i];
        } else{
            stg.push_back({i, 0.0});
        }
    }
    
    sort(stg.begin(), stg.end(), [](const pair<int, double>& a, const pair<int, double>& b){
        if (a.second == b.second){
            return a.first < b.first;
        } else
            return a.second > b.second;
    });
    
    for (auto& p : stg) {
        answer.push_back(p.first);
    }
    
    return answer;
}