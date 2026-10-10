<bits/stdc++.h>
using namespace std;
int main() {
    int test = 0;
    while(test--) {
        int a,b;
        cin >> a >> b;
        vector<int> nums(a,0);
        for(int i = 0; i < a;i++) {
            cin >> nums[i];
        }
        while(nums.empty()){
        for(int i = 0;i < a;i++) {
            if(nums[i] <= b) {
                v.erase(v.begin() + i);
                b++;
            }
        }
        int max = 0;
        for(int i = 0;i < a;i++) {
            if(nums[max] > b) {
                max = i;
            }
        }
        int temp = nums[max];
        nums.erase(v.begin() + max);
        nums.push_back(temp / 2);
        nums.push_back(temp / 2);
        b++;
     } 
     return b;
    }
}