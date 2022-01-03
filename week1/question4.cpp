#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}
string encode(string src)
{
    
    string ans;
    int count=1;
    for(int i=0;i<src.size();i++)
    {
       count =1;
       ans.push_back(src[i]);
       int j = i+1;
       while(src[i]==src[j])
       {
           count++;
           i++;
           j++;
       }
       ans.append(to_string(count));
    }
    return ans;
}     
 
