#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> s(5);
    for (int i = 0; i < 5; ++i) {
        getline(cin, s[i]);
    }
    for (int col = 0; col < 15; ++col) {
        for (int row = 0; row < 5; ++row) {
            if (col < (int)s[row].size()) {
                cout << s[row][col];
            }
        }
    }
    cout << endl;
    return 0;
}
