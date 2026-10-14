#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0) {
            cout << 0 << '\n';
        }
        else if (b <= a && (a - b) % 2 == 0) {
            cout << a << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }

    return 0;
}