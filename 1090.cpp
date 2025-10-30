#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>

using namespace std;

using ll = long long;

int main(){

    int N;
    cin >> N;
    
    vector<pair<int,int>> pts(N);
    vector<int> xs(N), ys(N);
    
    for(int i = 0; i < N; i++){
        cin >> pts[i].first >> pts[i].second;
        xs[i] = pts[i].first;
        ys[i] = pts[i].second;
    }

    const ll INF = LLONG_MAX / 4;
    vector<ll> ans(N, INF);

    for(int xi = 0; xi < N; xi++){
        for(int yi = 0; yi < N; yi++){
            int cx = xs[xi];
            int cy = ys[yi];
            vector<ll> dists(N);
            for(int i = 0; i < N; i++){
                dists[i] = llabs(pts[i].first - cx) + llabs(pts[i].second - cy);
            }
            sort(dists.begin(), dists.end());
            ll s = 0;
            for(int k = 0; k < N; k++){
                s += dists[k];
                ans[k] = min(ans[k], s);
            }
        }
    }

    for(int k = 0; k < N; k++){
        if(k) cout << ' ';
        cout << ans[k];
    }
    cout << '\n';

    return 0;
}
