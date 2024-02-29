/*Task: https://atcoder.jp/contests/abc337/tasks/abc337_a */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void testCase() {
    int n;
    cin >> n;
    int taka = 0;
    int aoki = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        taka += x;
        aoki += y;
    }
    if (taka > aoki) {
        cout << "Takahashi";
    } else if (taka < aoki) {
        cout << "Aoki";
    } else {
        cout << "Draw";
    }
}

int main() {
    testCase();
}
