#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> month = {0,31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> date = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    
    int sum = 0;
    for (int i = 1; i < a; i++){
        sum += month[i];
    }
    sum += b;
    return date[sum%7];
}