#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    string printMinNumberForPattern(string S){
    stack<char> st;
    int count=1;
    string ans;
    for(char i : S){
        if(i=='D'){
            char ch = count + '0';
            st.push(ch);
            count++;
        }
        if(i=='I'){
            char ch = count + '0';
            st.push(ch);
            count++;
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
        }
    }
    char ch = count + '0';
    st.push(ch);
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;   
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 