/*Task: https://atcoder.jp/contests/abc337/tasks/abc337_b */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    while (s[i] == 'A') i += 1;
    while (s[i] == 'B') i += 1;
    while (s[i] == 'C') i += 1;
    if (i == n) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    testCase();
}
