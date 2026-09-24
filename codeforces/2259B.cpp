#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] & 0b1) {
            ++cnt1;
        }
        if ((a[i] & 0b11) == 0) {
            ++cnt2;
        }
        if ((a[i] & 0b11) == 2) {
            ++cnt3;
        }
    }

    cout << max(max(cnt1, cnt2), cnt3) << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}