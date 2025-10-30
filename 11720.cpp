#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    string s;
    cin >> N >> s;

    int sum = 0;
    for (char c : s) {
        sum += c - '0';
    }

    cout << sum << "\n";
    return 0;
}
