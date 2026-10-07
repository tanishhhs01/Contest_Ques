#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, K, Y;
    cin >> X >> K >> Y;

    if (Y / K <= X && Y % K == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}