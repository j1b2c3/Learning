#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> sounds = {"aya", "ye", "woo", "ma"};
    
    for (string b : babbling){
        bool can_pronounce = true;
        
        for (int i = 0; i < 4; i++){
            string repeat = sounds[i] + sounds[i];
            if (b.find(repeat) != string::npos){
                can_pronounce = false;
                break;
            }
            
            size_t pos = b.find(sounds[i]);
            while (pos != string::npos){
                b.replace(pos, sounds[i].length(), " ");
                pos = b.find(sounds[i]);
            }
        }
        
        if (can_pronounce){
            bool valid = true;
            for (char c : b){
                if (c != ' '){
                    valid = false;
                    break;
                }
            }
            if (valid)
                answer++;
            }
        }
    
    return answer;
}