#include <iostream>
#include <set>
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
                int x = *a.begin();
                a.erase(a.begin());
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