#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node {
    int x, y, dist, keys;
};

int n, m;
vector<string> maze;
bool visited[50][50][64];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int bfs(int sx, int sy) {
    queue<Node> q;
    q.push({ sx, sy, 0, 0 });
    visited[sx][sy][0] = true;

    while (!q.empty()) {
        Node cur = q.front();
        q.pop();

        int x = cur.x;
        int y = cur.y;
        int dist = cur.dist;
        int keys = cur.keys;

        char c = maze[x][y];
        if (c == '1') return dist;

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            int nkeys = keys;

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            char nc = maze[nx][ny];
            if (nc == '#') continue;

            if (nc >= 'a' && nc <= 'f') {
                nkeys |= (1 << (nc - 'a'));
            }

            if (nc >= 'A' && nc <= 'F') {
                if (!(nkeys & (1 << (nc - 'A')))) continue;
            }

            if (!visited[nx][ny][nkeys]) {
                visited[nx][ny][nkeys] = true;
                q.push({ nx, ny, dist + 1, nkeys });
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    maze.resize(n);
    int sx, sy;

    for (int i = 0; i < n; i++) {
        cin >> maze[i];
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == '0') {
                sx = i; sy = j;
                maze[i][j] = '.';
            }
        }
    }

    cout << bfs(sx, sy) << "\n";
    return 0;
}
