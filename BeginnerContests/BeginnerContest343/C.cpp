/*Task: https://atcoder.jp/contests/abc343/tasks/abc343_c */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

bool palindrome(ll n) {
    string k = to_string(n);
    int j = k.length();
    for (int i = 0; i < (j + 1)/2; i++) {
        if (k[i] != k[j - 1 - i]) return false;
    }
    return true;
}

void testCase() {
    ll n; cin >> n;
    ll ans = 0;
    for (ll x = 1; x <= 1000000; x++) {
        ll k = x*x*x;
        if (k > n) break;
        if (palindrome(k)) ans = k;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
