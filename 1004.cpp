#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; i++) {
            int cx, cy, r;
            cin >> cx >> cy >> r;

            int dist1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
            int dist2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
            int r2 = r * r;

            bool inside1 = dist1 < r2;
            bool inside2 = dist2 < r2;

            if (inside1 != inside2) count++;
        }
        cout << count << "\n";
    }

    return 0;
}
