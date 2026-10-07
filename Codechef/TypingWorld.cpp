#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	for(int i = 0; i < num;i++) {
	    int cntl = 0;
	    int cntr = 0;
	    int max1 = 0;
	    int x,y;
	    cin >> x >> y;
	    string k,t;
	    cin >> k >> t;
	    for(int i = 0;i < x;i++) {
	         bool left = false;
	        for(int j = 0;j < y;j++) {
	            
	            if(k[i] == t[j]) {
	                left = true;
	                break;
	       }
	   }
	   if(left) {
	       cntl++;
	       cntr = 0;
	       max1 = max(max1,cntl);
	   }
	   else {
	       cntr++;
	       cntl =0;
	       max1 = max(max1,cntr);
	   }
	        
	  }
	    cout << max1 << '\n';
	}

}
