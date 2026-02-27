#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct meeting {
	int start;
	int end;
};

bool compare(meeting a, meeting b) {
	if (a.end == b.end) {
		return a.start < b.start;
	}
	return a.end < b.end;
}

int	main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<meeting> meetings(N);
	for (int i = 0; i < N; i++) {
		cin >> meetings[i].start >> meetings[i].end;
	}

	sort(meetings.begin(), meetings.end(), compare);

	int count = 0;
	int end_time = 0;

	for (int i = 0; i < N; i++) {
		if (meetings[i].start >= end_time) {
			count++;
			end_time = meetings[i].end;
		}
	}

	cout << count << "\n";

	return 0;
}