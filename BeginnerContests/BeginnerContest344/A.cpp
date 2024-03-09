/*For task: https://atcoder.jp/contests/abc344/tasks/abc344_a */

#include <bits/stdc++.h>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '|') cnt++;
        if (s[i] != '|' && cnt != 1) cout << s[i];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}