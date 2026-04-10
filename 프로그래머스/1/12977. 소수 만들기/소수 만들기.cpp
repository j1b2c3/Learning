#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
        
    for (int i = 0; i < nums.size() - 2; i++){
        for (int j = i + 1; j < nums.size() - 1; j++){
            for (int k = j + 1; k < nums.size(); k++){
                int sum = nums[i] + nums[j] + nums[k];
                bool isprime = true;
                for (int l = 2; l < (sum / 2); l++){
                    if (sum % l == 0)
                        isprime = false;
                }
                if (isprime)
                    answer++;
            }
        }
    }
    
    return answer;
}