/*Task: https://atcoder.jp/contests/abc340/tasks/abc340_b */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int ar[101];

void testcase() {
    int q;
    cin >> q;
    int j = 0;
    for (int i = 0; i < q; i++) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            ar[j] = x;
            j++;
        } else {
            cout << ar[j - x] << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase();
}
