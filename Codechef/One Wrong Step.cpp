#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    for(int i = 0; i < k; i++) {
        vector<int> temp(4, 0);

        int l;
        cin >> l;

        string m;
        cin >> m;

        if(l % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        for(int j = 0; j < l; j++) {
            if(m[j] == 'U')
                temp[0]++;
            else if(m[j] == 'D')
                temp[1]++;
            else if(m[j] == 'R')
                temp[2]++;
            else if(m[j] == 'L')
                temp[3]++;
        }

        if(temp[0] == temp[1] && abs(temp[2] - temp[3]) == 2) {
            cout << "YES\n";
        }
        else if(abs(temp[0] - temp[1]) == 2 && temp[2] == temp[3]) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}