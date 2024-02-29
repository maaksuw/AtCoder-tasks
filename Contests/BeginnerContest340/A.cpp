/*Task: https://atcoder.jp/contests/abc340/tasks/abc340_a */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    int a, b, d;
    cin >> a >> b >> d;
    while (a <= b) {
        cout << a << " ";
        a += d;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
