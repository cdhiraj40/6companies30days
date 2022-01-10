#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long countWays(int m)
    {
    long long a = m/2;
    long long count =1;

    return count+a;    }
};

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl;
    }
    return 0;
} 