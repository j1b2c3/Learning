#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> num;
    
    while (n){
        num.push_back(n % 3);
        n /= 3;
    }
    
    long long power = 1;
    
    for (int i = num.size() - 1; i >= 0; i--){
        answer += num[i] * power;
        power *= 3;
    }
    
    return answer;
}