#include <string>
#include <vector>

using namespace std;

int getGCB(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int getLCM(int a, int b){
    return (a / getGCB(a, b)) * b;
}


int solution(vector<int> arr) {
    int answer = arr[0];
    
    for (int i = 1; i < arr.size(); ++i){
        answer = getLCM(answer, arr[i]);
    }
    
    return answer;
}