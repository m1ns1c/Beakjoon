#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string nc;
    vector<string> nn(n);

    for (int i = 0; i < n; i++) {
        cin >> nc;
        int a = nc.length();
        nn[i] = string(1, nc[0]) + string(1, nc[a - 1]);
    }

    for (int i = 0; i < n; i++) {
        cout << nn[i] << endl;
    }

    return 0;
}
