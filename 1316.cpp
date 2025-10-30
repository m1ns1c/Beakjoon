#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        bool used[26] = {false};
        char prev = 0;
        bool isGroup = true;

        for (int j = 0; j < word.length(); j++) {
            char current = word[j];

            if (current != prev) {
                if (used[current - 'a'] == true) {
                    isGroup = false;
                    break;
                }
                used[current - 'a'] = true;
            }
            prev = current;
        }
        if (isGroup) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
