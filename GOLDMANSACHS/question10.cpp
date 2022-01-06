#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<int> kLargest(int arr[], int n, int k)
    {
            vector<int> ans;
    sort(arr, arr + n, greater<int>());
    for(int i=0;i<k;i++){
        ans.push_back(arr[i]);
    }
    return ans;
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
