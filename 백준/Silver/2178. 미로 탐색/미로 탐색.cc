#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int N, M;
int maze[101][101];
int dist[101][101];
bool visited[101][101];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    visited[startX][startY] = true;
    dist[startX][startY] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == N - 1 && y == M - 1) {
            return dist[x][y];
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
                if (maze[nx][ny] == 1 && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    return -1;
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < M; j++) {
            maze[i][j] = line[j] - '0';
        }
    }

    cout << bfs(0, 0) << endl;

    return 0;
}