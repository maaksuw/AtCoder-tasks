/*Task: https://atcoder.jp/contests/arc171/tasks/arc171_a */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a > n) {
        cout << "No\n";
        return;
    }
    int fr = n/2;
    int fu = n - fr;
    int p = n*fu;
    if (a <= fr) {
        p -= a*fu;
    } else {
        a -= fr;
        p = (fu - a)*(fu - a);
    }
    if (b <= p) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        testCase();
    }
}
