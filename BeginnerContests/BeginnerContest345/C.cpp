/*For task: https://atcoder.jp/contests/abc345/tasks/abc345_c */

#include <iostream>

using namespace std;

typedef long long ll;
typedef long double ld;

int ar[1000001][26];
int cnts[26];
int offset = 97;

void testCase() {
    string s; cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) cnts[s[i] - offset]++;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 26; j++) {
            ar[i][j] = ar[i + 1][j];
            if (s[i] == j + offset) ar[i][j]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += n - (i + 1) - ar[i + 1][s[i] - offset];
    }
    for (int i = 0; i < 26; i++) {
        if (cnts[i] >= 2) {
            ans++;
            break;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
