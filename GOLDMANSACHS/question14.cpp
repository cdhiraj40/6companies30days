#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        if(N==1)
           return 1;
       
       int a = M%N+K-1;
       if(a==N)
           return a;
       
       return a%N;    
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M,K;
        
        cin>>N>>M>>K;

        Solution ob;
        cout << ob.findPosition(N,M,K) << endl;
    }
    return 0;
}  