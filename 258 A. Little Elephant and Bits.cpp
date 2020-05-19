#include<bits/stdc++.h>
using namespace std;
#define MAXN 100009

int main()
{
	string s,res="";
	cin>>s;

	int zero=0;

	for(int i=0;i<s.length();i++) 
	{
		if(s[i]=='0') zero++;
	}

	if(zero == s.length()) res="0";

	else if(zero==0) 
	{
		for(int i=0;i<s.length()-1;i++) res.push_back(s[i]);	
	}
	
	else if(zero==1)
	{
		for(int i=0;i<s.length();i++) if(s[i]!='0') res.push_back(s[i]);		
	}
	
	else
	{
		int count=0;
		for(int i=0;i<s.length();i++) 
		{
			if(s[i]=='0')
			{
				count++;
				if(count!=1) res.push_back('0');
			} 
			else res.push_back(s[i]);
		}
	}
	
	cout<<res<<endl;
return 0;
}
