#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;


int get_total_days(string date){
    stringstream ss(date);
    string temp;
    vector<int> d;
    
    while (getline(ss, temp, '.')){
        d.push_back(stoi(temp));
    }
    
    return (d[0] * 12 * 28) + (d[1] * 28) + d[2];
}


vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    int today_days = get_total_days(today);
    
    unordered_map<string, int> terms_map;
    
    for (const string& t : terms){
        stringstream ss(t);
        string type, period;
        ss >> type >> period;
        terms_map[type] = stoi(period) * 28;
    }
    
    for (int i = 0; i < privacies.size(); i++){
        stringstream ss(privacies[i]);
        string date, type;
        ss >> date >> type;
        
        int expire_date = get_total_days(date) + terms_map[type];
        if (expire_date <= today_days){
            answer.push_back(i + 1);
        }    
    }
    
    return answer;
}