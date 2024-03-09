/*For task: https://atcoder.jp/contests/abc344/tasks/abc344_b */

#include <bits/stdc++.h>
#include <map>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    vector<int> v;
    while (true) {
        int a; cin >> a;
        v.push_back(a);
        if (a == 0) break;
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}