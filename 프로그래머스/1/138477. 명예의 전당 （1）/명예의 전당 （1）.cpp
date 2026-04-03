#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> hof;
    
    for (int s : score){
        hof.push_back(s);
        sort(hof.begin(), hof.end(), greater<int>());
        if (hof.size() > k){
            hof.pop_back();
        }
        answer.push_back(hof.back());
    }

    return answer;
}