#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;

    // f(n) = f(n-1) + f(n - 2)

    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 2;
    }
    
    long long prev = 1;
    long long prev2 = 2;
    
    for (int i = 3; i <= n; ++i){
        answer = (prev + prev2) % 1234567;
        prev = prev2;
        prev2 = answer;
    }
    
    return answer;
}