#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int i = 0;
    char temp = s[i];
    string tempstr = "";
    vector<string> it;
    int x_count = 0;
    int y_count = 0;
    
    
    while(true){
        if (temp == s[i]){
            x_count++;
        }
        else if (temp != s[i]){
            y_count++;
        }
        tempstr += s[i];
        i++;
        
        if (x_count == y_count || i >= s.length()){
            x_count = 0;
            y_count = 0;
            it.push_back(tempstr);
            tempstr = "";
            s.erase(0,i);
            i = 0;
            temp = s[i];
        }
        
        if (s.length() == 0)
            break;
        
    }
    
    answer = it.size();
    return answer;
}