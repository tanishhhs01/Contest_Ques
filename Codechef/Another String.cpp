#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;
	for(int i = 0;i < k;i++) {
	    int sum1 = 0;
	    int sum2 = 0;
	    int size = 0;
	    cin >> size;
	    string q,t;
	    cin >> q >> t;
	    for(int i = 0; i <size;i++) {
	        if(q[i] == '1') sum1++;
	        if(t[i] == '1') sum2++;
	    }
	    if(sum1 % 2 == sum2 % 2) cout << "YES\n";
	    else cout << "NO\n";
	}
  return 0;
}
