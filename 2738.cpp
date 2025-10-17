#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    vector<vector<int>> B(N, vector<int>(M));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> A[i][j];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> B[i][j];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            int s = A[i][j] + B[i][j];
            if (j) cout << ' ';
            cout << s;
        }
        cout << '\n';
    }
    return 0;
}

