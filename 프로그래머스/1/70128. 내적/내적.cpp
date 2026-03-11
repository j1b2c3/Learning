#include <string>
#include <vector>

using namespace std;

int solution(vector<int> a, vector<int> b) {
    int answer = 0;
    vector<int> sum;
    for (int i = 0; i < a.size(); i++){
        sum.push_back(a[i] * b[i]);
        answer += sum[i];
    }   
    return answer;
}