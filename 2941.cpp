#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0, result = 0;

    while (i < s.size()) {
        if (s[i] == 'c' && i + 1 < s.size() && (s[i+1] == '=' || s[i+1] == '-')) {
            i += 2;
        }
        else if (s[i] == 'd') {
            if (i + 2 < s.size() && s[i+1] == 'z' && s[i+2] == '=') {
                i += 3;
            } else if (i + 1 < s.size() && s[i+1] == '-') {
                i += 2;
            } else {
                i++;
            }
        }
        else if ((s[i] == 'l' || s[i] == 'n') && i + 1 < s.size() && s[i+1] == 'j') {
            i += 2;
        }
        else if ((s[i] == 's' || s[i] == 'z') && i + 1 < s.size() && s[i+1] == '=') {
            i += 2;
        }
        else {
            i++;
        }
        result++;
    }

    cout << result << "\n";
    return 0;
}
