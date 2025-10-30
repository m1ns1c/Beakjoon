#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (c == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }

    cout << count << endl;
    return 0;
}
