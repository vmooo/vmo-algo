#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll ans = 0;
    ll i = 0;
    for (; i <= min(k - 1, y - 1); ++i) {
        ans += (y + i) % (x + i);
    }

    ans += (y - x) * (k - i);

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}