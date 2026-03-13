#include <cmath>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    answer = (long long) price * (count*(count+1)/2);
    answer = money - answer;
    if (answer >= 0)
        answer = 0;
    else
        answer = abs(answer);

    return answer;
}