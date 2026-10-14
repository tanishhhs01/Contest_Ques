#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int a, b;
        cin >> a >> b;

        if (a <= b) {
            cout << -1 << '\n';
        } else {
            cout << min(b, a - b) << '\n';
        }
    }

    return 0;
}