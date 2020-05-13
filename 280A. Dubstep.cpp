#include<bits/stdc++.h>
using namespace std;
bool status[1000000 + 1];
int main()
{
	string s;
	vector<string> vv;
	string s1="";
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
			vv.push_back(s1);i+=2;
			s1="";
		} else s1.push_back(s[i]);
	}vv.push_back(s1);
	for(int i=0;i<vv.size();i++) {
		if(vv[i].length()) cout<<vv[i]<<" ";
	}
return 0;
}
