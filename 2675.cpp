#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> st(n);

    for (int i = 0; i < n; i++) {
        int r;
        string s;
        cin >> r >> s;

        string result = "";
        for (int j = 0; j < s.length(); j++) {
            for (int k = 0; k < r; k++) {
                result += s[j];
            }
        }
        st[i] = result;
    }

    for (int i = 0; i < n; i++) {
        cout << st[i] << endl;
    }

    return 0;
}
