#include <iostream>

using namespace std;

int main() {
    int num[10][10];
    int x = 0, y = 0;
    int result = 0;
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> num[i][j];
            if(num[i][j] > result) {
                result = num[i][j];
            }
        }
    }
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(num[i][j] == result) {
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << result << endl;
    cout << x << ' ' << y << endl;
    return 0;
}
