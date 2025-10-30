#include <iostream>

using namespace std;

int main() {
    
    bool seen[42] = {false};
    
    for (int i = 0; i < 10; ++i) {
        int x;
        cin >> x;
        seen[x % 42] = true;
    }
    
    int cnt = 0;
    
    for (bool b : seen) {
        if(b) {
            ++cnt;
        }
    }
    cout << cnt << '\n';
    return 0;
    
}
