#include <string>
#include <vector>

using namespace std;

int div(int a){
    int count = 0;
    
    for (int i = 1; i <= a/2; i++){
        if (a % i == 0)
            count++;        
    }
    return count;
    
}

int solution(int left, int right) {
    int answer = 0;
    for (int i = left; i <= right; i++){
        if (div(i) % 2 == 0)
            answer -= i;
        else
            answer += i;
    }
    return answer;
}