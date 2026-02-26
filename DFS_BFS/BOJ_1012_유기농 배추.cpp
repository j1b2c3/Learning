#include <iostream>
#include <cstring>

using namespace std;

int M, N, K;
int farm[50][50];
bool visited[50][50];

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

void dfs(int x, int y) {
	visited[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
			if (farm[nx][ny] == 1 && !visited[nx][ny]) {
				dfs(nx, ny);
			}
		}
	}
}

int main() {

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;

		memset(farm, 0, sizeof(farm));
		memset(visited, false, sizeof(visited));

		for (int j = 0; j < K; j++) {
			int x, y;
			cin >> x >> y;
			farm[x][y] = 1;
		}

		int count = 0;

		for (int k = 0; k < M; k++) {
			for (int l = 0; l < N; l++) {
				if (farm[k][l] == 1 && !visited[k][l]) {
					dfs(k, l);
					count++;
				}
			}
		}
		cout << count << "\n";
	}

	return 0;
}