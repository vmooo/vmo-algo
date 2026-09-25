#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("-O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace  std;

#define ll long long
#define F first
#define S second

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<pair<int, int> > > vvpii;
typedef vector<vector<pair<ll, ll> > > vvpll;
typedef pair<int, pair<int, int> > piii;
typedef vector<ll> vll;
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;
typedef vector<vector<ll> > vvll;
typedef vector<pair<ll, pair<ll, ll> > > vplll;
typedef pair<ll, ll> pll;

void solve() {

    string s;

    int n;
    char c, buf;
    cin >> n >> c;

    cin >> s;

    int l = 0;
    int r = static_cast<int>(s.size()) - 1;

    int ans = 0;

    //cout << s[l] << " " << s[r] << "\n";

    while (l < r) {
        //cout << "i";
        if (s[l] != s[r]) {
            if (s[l] == c) {
                //cout << "A";
                ++ans;
            }
            else if (s[r] == c) {
                //cout << "B";
                ++ans;
            }
            else {
                //cout << "C";
                ans += 2;
            }
        }
        ++l;
        --r;
    }

    cout << ans << "\n";
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}