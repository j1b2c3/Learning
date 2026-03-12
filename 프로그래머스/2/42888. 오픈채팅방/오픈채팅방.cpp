#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<string,string>> state_uid;

    map<string, string> uid_name;
    
    for (string str : record){
        stringstream ss(str);
        string state;
        string uid;
        string name;
        
        ss >> state >> uid >> name;
        
        state_uid.push_back(make_pair(state, uid));
        
        if (state == "Enter" || state == "Change"){
            uid_name[uid] = name;
        }
    }
    
    for (pair<string, string> p : state_uid){
        if (p.first == "Enter"){
            answer.push_back(uid_name[p.second] + "님이 들어왔습니다.");
        }
        else if (p.first == "Leave"){
            answer.push_back(uid_name[p.second] + "님이 나갔습니다.");
        }
    }    
    
    return answer;
}