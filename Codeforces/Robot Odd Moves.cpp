<bits/stdc++.h>
using namespace std;
int main() {
    int test = 0;
    cin >> test;
    while(test--) {
    int a,b = 0;
    cin >> a >> b;
    if(abs(a-b) > 1) cout << -1 << endl;
    else if(abs(a-b) == 0) cout << a << endl;
    else {
        cout << a + 1 << endl;
    }
}
   return 0;
}