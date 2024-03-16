/*For task: https://atcoder.jp/contests/abc345/tasks/abc345_a */

#include <iostream>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    string s; cin >> s;
    int n = s.length();
    if (s[0] == '<' && s[n - 1] == '>') {
        for (int i = 1; i < n - 1; i++) {
            if (s[i] != '=') {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
