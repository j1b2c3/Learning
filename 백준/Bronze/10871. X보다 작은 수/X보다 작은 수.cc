#include <iostream>
using namespace std;

int A[10000];

int	main() {
	int N, X;

	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		if (A[i] < X) {
			cout << A[i] << " ";
		}
	}
	return 0;
}