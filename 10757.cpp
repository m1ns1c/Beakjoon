#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int len = max(A.size(), B.size());
    string result;
    int carry = 0;

    for (int i = 0; i < len; i++) {
        int dA = (i < A.size() ? A[i] - '0' : 0);
        int dB = (i < B.size() ? B[i] - '0' : 0);

        int sum = dA + dB + carry;
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    if (carry > 0) result.push_back(carry + '0');

    reverse(result.begin(), result.end());
    cout << result << "\n";

    return 0;
}
