/*For task: https://atcoder.jp/contests/abc344/tasks/abc344_c */

#include <iostream>
#include <set>

using namespace std;

typedef long long ll;
typedef long double ld;

int a[100];
int b[100];
int c[100];

void testCase() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int m; cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    int l; cin >> l;
    for (int i = 0; i < l; i++) cin >> c[i];
    set<int> sum;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < l; k++) {
                sum.insert(a[i] + b[j] + c[k]);
            }
        }
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (sum.count(x)) cout << "Yes\n";
        else cout << "No\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    testCase();
}
