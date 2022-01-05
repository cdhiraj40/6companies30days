class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int i=0,j=0,n=nums.size();
    int len=INT_MAX;
    int sum= 0;
    bool passed=false;
    while(j<n) {
        sum += nums[j];

        while (sum >= target) {
            passed=true;
            len = min(len, j - i + 1);
            sum -= nums[i];
            i++;
        }
        j++;
    }
    if(!passed)
        return 0;
    return len;
    }
};