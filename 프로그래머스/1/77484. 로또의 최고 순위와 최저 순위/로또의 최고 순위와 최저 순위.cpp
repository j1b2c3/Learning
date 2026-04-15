#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int match_count = 0;
    int zero_count = 0;
    
    sort(win_nums.begin(), win_nums.end());
    
    for (int l : lottos){
        if (l == 0){
            zero_count++;
        }
        else if (binary_search(win_nums.begin(), win_nums.end(), l)){
            match_count++;
        }
    }
    
    int rank[] = {6, 6, 5, 4, 3, 2, 1};
    return {rank[match_count + zero_count], rank[match_count]};

}