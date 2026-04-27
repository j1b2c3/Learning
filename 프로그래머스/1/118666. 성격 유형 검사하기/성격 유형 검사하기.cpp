#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    unordered_map<char, int> scores = {
        {'R', 0}, {'T', 0}, {'C', 0}, {'F', 0},
        {'J', 0}, {'M', 0}, {'A', 0}, {'N', 0}
    };
    
    for (int i = 0; i < survey.size(); i++){
        char agree = survey[i][0];
        char disagree = survey[i][1];
        int choice = choices[i];
        
        if (choice < 4){
            scores[agree] += (4 - choice);
        }
        if (choice > 4){
            scores[disagree] += (choice - 4);
        }
    }
    
    answer += (scores['R'] >= scores['T'] ? 'R' : 'T');
    answer += (scores['C'] >= scores['F'] ? 'C' : 'F');
    answer += (scores['J'] >= scores['M'] ? 'J' : 'M');
    answer += (scores['A'] >= scores['N'] ? 'A' : 'N');
    
    return answer;
}