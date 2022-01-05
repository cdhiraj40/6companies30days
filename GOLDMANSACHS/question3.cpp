#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int left=0,right=0;
        long long prod=1;int ansd=0;
        
        while(right<a.size())
        {
            prod *=a[right];
            
            while(prod>=k)
            {
                prod /= a[left];
                left++;
            }
            
            ansd+= (right - left) +1; 
            right++;
        }
        return ansd;
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        cout << countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
