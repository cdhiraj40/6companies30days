#include <bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2);
int main() {
    
    int T;
    cin>>T;
    while(T--)
    {
        string a,b;
        cin>>a>>b;
        
        cout<<gcdOfStrings(a,b)<<endl;
    }
    return 0;
}    
string gcdOfStrings(string str1, string str2) {
    if(str1 + str2 == str2 + str1)
    {
       return str1.substr(0, __gcd(str1.size(), str2.size()));
    }
    else
        return ""; 
    }