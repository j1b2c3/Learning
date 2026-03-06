#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// rank_len은 배열 rank의 길이입니다.
// attendance_len은 배열 attendance의 길이입니다.
int solution(int rank[], size_t rank_len, bool attendance[], size_t attendance_len) {
    int answer = 0;
    int a = -1, b = -1, c = -1;
        
    for (int i = 0; i < rank_len; i++){
        if (attendance[i] == true){
            if (rank[i] < rank[a] || a == -1){
                c = b;
                b = a;
                a = i;
            }
            else if (rank[i] < rank[b] || b == -1){
                c = b;
                b = i;
            }
            else if (rank[i] < rank[c] || c == -1){
                c = i;
            }
        }        
    }
    
    answer = 10000 * a + 100 * b + c;
    
    return answer;
}