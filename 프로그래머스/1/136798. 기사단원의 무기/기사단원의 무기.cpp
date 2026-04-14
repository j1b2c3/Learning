#include <string>
#include <vector>

using namespace std;

int countDiv(int n){
    int count = 0;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            if (i * i == n)
                count++;
            else
                count += 2;
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; i++){
        if (countDiv(i) > limit)
            answer += power;
        else
            answer += countDiv(i);
    }
    
    return answer;
}