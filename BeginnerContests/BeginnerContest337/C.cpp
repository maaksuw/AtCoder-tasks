/*Task: https://atcoder.jp/contests/abc337/tasks/abc337_c */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int a[400000];

void testCase() {
    int n;
    cin >> n;
    int p = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if (x == -1) p = i;
        else a[x] = i;
    }
    cout << p << " ";
    for (int i = 0; i < n - 1; i++) {
        cout << a[p] << " ";
        p = a[p];
    }
}

int main() {
    testCase();
}
