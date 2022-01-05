#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
bool canPair(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    if (nums.size() & 1)
        return false;
    for(int num:nums){
        freq[((num % k) + k) % k]++;
    }

    for(int num:nums){
        int rem = ((num % k) + k) % k;

        if(rem == 0)
        {
            if(freq[rem] %2==1)
                return false;
        }
        else if(2*rem == k){
            if(freq[rem] %2==1) {
                return false;
            }
        } else{
            if(freq[rem] != freq[k-rem])
                return false;
        }
    }
    return true;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
} 