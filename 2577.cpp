#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    int num[10] = {0};
    
    cin >> a >> b >> c;
    
    int result = a * b * c;
    
    for (char ch : to_string(result)) {
        num[ch - '0']++;
    }
    
    for(int i = 0; i < 10; i++) {
        cout << num[i] << endl;
    }
    return 0;
}
