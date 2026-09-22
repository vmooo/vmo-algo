#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main () {

    vector<char> a;
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] != '+') {
            a.push_back(s[i]);
        }
    }

    sort(a.begin(), a.end());

    cout << a[0];
    for (size_t i = 1; i < a.size(); ++i) {
        cout << '+' << a[i];
    }

    return 0;
}