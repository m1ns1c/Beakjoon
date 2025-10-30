#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    int alpha[26] = {0};

    for (char &c : str) {
        c = toupper(c);
        alpha[c - 'A']++;
    }

    int maxCount = 0;
    char result = '?';
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > maxCount) {
            maxCount = alpha[i];
            result = 'A' + i;
        } else if (alpha[i] == maxCount) {
            result = '?';
        }
    }

    cout << result << "\n";
    return 0;
}
