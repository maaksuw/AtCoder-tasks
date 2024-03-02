/*Task: https://atcoder.jp/contests/abc343/tasks/abc343_b */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int a[100][100];

void testCase() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
