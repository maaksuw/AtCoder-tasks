/*For task: https://atcoder.jp/contests/abc345/tasks/abc345_b */

#include <iostream>
#include <string>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    ll x; cin >> x;
    ll ans = x/10;
    string s = to_string(x);
    int n = s.length();
    if ((x >= 1 && x <= 9) || (s[0] != '-' && s[n - 1] != '0')) {
        ans++;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
