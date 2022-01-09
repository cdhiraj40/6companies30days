#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
int longestMountain(vector<int>& arr) {
    int n=arr.size();
    int maxx=0;
    for(int i=1;i<=n-2;)
    {

        int  l = i-1,r=i+1;
        int count=1;
        if(arr[l]<arr[i] && arr[r]<arr[i]){
            int j = i;
            while(j>0 && arr[j]>arr[j-1])
            {
                j--;
                count++;
            }
            while(i<n-1 && arr[i]>arr[i+1])
            {
                i++;
                count++;
            }
            maxx = max(maxx,count);
        }
        else{
            i++;
        }
    }

    return maxx;
}
};

int main() {
    
    int t;
    cin >> t;
    
    while(t--){
        vector<int> v;
        for(int i = 0;i<v.size();i++){ 
            int x;
            cin >> x;
            v.push_back(x);
        }
        Solution ob;
        cout<< ob.longestMountain(v);
        
    }
    return 0;
} 