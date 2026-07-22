#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp1 = 0;
    int temp2 = 1;
    
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    
    for (int i = 2; i <= n; i++){
        answer = (temp1 + temp2) % 1234567;
        temp1 = temp2;
        temp2 = answer;
    }
    
    return answer;
}