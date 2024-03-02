/*Task: https://atcoder.jp/contests/abc343/tasks/abc343_d */

#include <bits/stdc++.h>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;

map<ll,int> mp;
ll ar[252525];

void testCase() {
    int n, t; cin >> n >> t;
    for (int i = 1; i <= n; i++) ar[i] = 0;
    mp[0] = n;
    int ans = 1;
    for (int i = 0; i < t; i++) {
        int a; cin >> a;
        ll b; cin >> b;
        ll old = ar[a];
        ll nev = old + b;
        if (mp[old] > 1 && mp[nev] == 0) ans++;
        else if (mp[old] == 1 && mp[nev] >= 1) ans--;
        cout << ans << "\n";
        ar[a] = nev;
        mp[old]--;
        mp[nev]++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
