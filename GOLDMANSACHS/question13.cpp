#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
   string decodedString(string s){
    stack<char>st;
    for(char & i : s){
        if(i==']') {
            string ans;
            while (!st.empty() && st.top() != '[') {
                ans=(st.top())+ans;
                st.pop();
            }
            st.pop();
            string temp;
            while (!st.empty() && isdigit(st.top())) {
                 temp=(st.top())+temp;
                 st.pop();
            }
            int num = stoi(temp);
            string repeat;
            for (int j = 0; j < num; j++)
                repeat += ans;
            for (char c : repeat)
                st.push(c);
        }
        else
            st.push(i);
    }
    string res;
    while (!st.empty()) {
        res = st.top() + res;
        st.pop();
    }
    return res;
}
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
} 