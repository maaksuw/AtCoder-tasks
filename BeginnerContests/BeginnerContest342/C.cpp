/*Task: https://atcoder.jp/contests/abc342/tasks/abc342_c */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;

char a [128];

void testcase() {
    for (int i = 'a'; i <= 'z'; i++) a[i] = i;
    int n; cin >> n;
    string s; cin >> s;
    int q; cin >> q;
    for (int j = 0; j < q; j++) {
        char c, d; cin >> c >> d;
        for (int i = 'a'; i <= 'z'; i++) {
            if (a[i] == c) a[i] = d;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[s[i]];
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase();
}
