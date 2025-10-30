#include <iostream>

using namespace std;

int main() {
    int num, maxVal = -1, idx = 0;

    for (int i = 1; i <= 9; i++) {
        cin >> num;
        if (num > maxVal) {
            maxVal = num;
            idx = i;
        }
    }

    cout << maxVal << "\n" << idx << endl;
    return 0;
}
