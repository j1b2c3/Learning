#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int tmp = 0;
    int max1, max2 = 0;
    for (int i=0; i < sizes.size(); i++){
        if (sizes[i][0] < sizes[i][1]){
            tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
            }
    }
    for (int i = 0; i < sizes.size(); i++){
        if (sizes[i][0] > max1)
            max1 = sizes[i][0];
        if (sizes[i][1] > max2)
            max2 = sizes[i][1];
    }
    answer = max1 * max2;
    return answer;
}