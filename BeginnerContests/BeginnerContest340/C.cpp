/*Task: https://atcoder.jp/contests/abc340/tasks/abc340_c */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int log2(ll n) {
    return 63 - __builtin_clzll(n);
}

ll pow(int n, int e) {
    ll res = 1;
    for (int i = 0; i < e; i++) res *= n;
    return res;
}

void testcase() {
    ll n; cin >> n;
    int exp = log2(n);
    ll s = pow(2, exp);
    ll result = exp*n + (n - s)*2;
    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase();
}
