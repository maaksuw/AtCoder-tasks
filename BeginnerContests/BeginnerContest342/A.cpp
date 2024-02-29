/*Task: https://atcoder.jp/contests/abc342/tasks/abc342_a */

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;

int a [128];

void testcase() {
    string s;
    cin >> s;
    for (int i = 0; i < 128; i++) a[i] = 0;
    for (int i = 0; i < s.length(); i++) a[s[i]]++;
    char x = 'x';
    for (int i = 0; i < 128; i++) {
        if (a[i] == 1) x = i;
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == x) {
            cout << i + 1 << "\n";
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testcase();
}
