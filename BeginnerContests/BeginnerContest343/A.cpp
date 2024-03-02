/*Task: https://atcoder.jp/contests/abc343/tasks/abc343_a */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    int a, b; cin >> a >> b;
    for (int i = 0; i <= 9; i++) {
        if (i != a + b) {
            cout << i << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
