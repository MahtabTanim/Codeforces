#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string res="";
	bool status=false;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='.') res.push_back('0');
		else if(s[i]=='-')
		{	i++;
			if(s[i]=='.') res.push_back('1');
			else if(s[i]=='-') res.push_back('2');
			if(i==s.length()-1) status=true;
		}
	}
	if(!status) res.push_back('0');
	cout<<res<<endl;
return 0;
}
