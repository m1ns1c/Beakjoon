#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    
    vector<int> a(N + 1, 0);

    while (M--) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int x = i; x <= j; ++x) a[x] = k;
    }

    for (int x = 1; x <= N; ++x) {
        if (x > 1) cout << ' ';
        cout << a[x];
    }
    cout << '\n';
    return 0;
}
