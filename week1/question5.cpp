#include <bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n);  
int main() {
    
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        
        cout<<nthUglyNumber(n)<<endl;
    }
    return 0;
}    


    int nthUglyNumber(int n) {
          vector<int>v(n);
    int twop=0,threep=0,fivep=0;
    int two=2,three=3,five=5;
    v[0]=1;
    for (int i=1;i<n;i++) {
        v[i] = min(two, min(three,five));
        if(v[i]==two){
            twop++;
            two = 2 * v[twop];
        }
        if(v[i]==three){
            threep++;
            three = 3 * v[threep];
        }
        if(v[i]==five){
            fivep++;
            five = 5 * v[fivep];
        }
    }
    return v[n-1];  
    }