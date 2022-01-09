#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
string FirstNonRepeating(string A){
    unordered_map<char,int> m;
    queue<char>l;
    string ans;
    for(char & i : A){
        m[i]++;
        l.push(i);
        while(!l.empty()){
            if (m.find(l.front()) != m.end() && m[l.front()]>1)
                l.pop();
            else break;
        }
        if(l.empty())
            ans.push_back('#');
        else
            ans.push_back(l.front());
    }
    return ans;
}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0 ;
}