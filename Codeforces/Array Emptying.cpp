#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n, k;
        cin >> n >> k;

        multiset<int> a;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.insert(x);
        }

        int operations = 0;

        while (!a.empty()) {
            if (*a.begin() <= k) {
                a.erase(a.begin());
            } else {
                auto it = prev(a.end());
                int x = *it;
                a.erase(it);
                a.insert(x / 2);
                a.insert(x / 2);
            }

            k++;
            operations++;
        }

        cout << operations << '\n';
    }

    return 0;
}