#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void solve() {
    int N;
    if (!(cin >> N)) return;

    vector<long long> cards(N);
    long long total_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
        total_sum += cards[i];
    }

    deque<long long> dq;
    for (long long val : cards) {
        dq.push_back(val);
        while (dq.size() >= 3) {
            int s = dq.size();
            long long x = dq[s - 3];
            long long y = dq[s - 2];
            long long z = dq[s - 1];

            if (x <= y && y >= z) {
                dq.pop_back();
                dq.pop_back();
                dq.pop_back();
                dq.push_back(x - y + z);
            }
            else {
                break;
            }
        }
    }

    long long diff = 0;
    bool my_turn = true;
    while (!dq.empty()) {
        long long selected;
        if (dq.front() >= dq.back()) {
            selected = dq.front();
            dq.pop_front();
        }
        else {
            selected = dq.back();
            dq.pop_back();
        }

        if (my_turn) diff += selected;
        else diff -= selected;

        my_turn = !my_turn;
    }

	//A+B = total_sum
	//A-B = diff
	//A = (total_sum + diff) / 2
    cout << (total_sum + diff) / 2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}