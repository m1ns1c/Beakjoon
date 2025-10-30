#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = -1;
    for (int five = n / 5; five >= 0; five--) {
        int rest = n - five * 5;
        if (rest % 3 == 0) {
            int three = rest / 3;
            a = five + three;
            break;
        }
    }

    cout << a << "\n";
    return 0;
}
