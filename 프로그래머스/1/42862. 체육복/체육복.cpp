#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> students(n + 1, 0);
    
    for (int l : lost) students[l]--;
    for (int r : reserve) students[r]++;
    
    for (int i = 1; i <= n; i++){
        if (students[i] == 1){
            if (i > 1 && students[i - 1] == -1){
                students[i-1]++;
                students[i]--;
            }
            else if (i < n && students[i + 1] == -1){
                students[i+1]++;
                students[i]--;
            }
        }
    }
    
    for (int i = 1; i <= n; i++){
        if (students[i] >= 0){
            answer++;
        }
    }
    
    return answer;
}