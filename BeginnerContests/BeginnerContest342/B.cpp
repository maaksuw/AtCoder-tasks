/*Task: https://atcoder.jp/contests/abc342/tasks/abc342_b */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;

int p [128];

void query(int a, int b, int n) {
    for (int i = 0; i < n; i++) {
        if (p[i] == a || p[i] == b) {
            cout << p[i] << "\n";
            return;
        }
    }
}

void testcase() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        query(a, b, n);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase();
}
