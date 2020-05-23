#include<bits/stdc++.h>
using namespace std;
void process(string s, string *a, string *b)
{
	string s1="1",s2="1";
	int c=0;
	bool big=false;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			s1.push_back('0');
			s2.push_back('0');
		}
		else if(s[i]=='2')
		{
			if(big)
			{
				s1.push_back('0');
				s2.push_back('2');	
			}
			else
			{
				s1.push_back('1');
				s2.push_back('1');
			}
		}
		else
		{
			if(big==false)
			{
				s1.push_back('1');
				s2.push_back('0');
				big=true;
			}
			else
			{
				s1.push_back('0');
				s2.push_back('1');
			}
		}
	}
	*a=s1;
	*b=s2;
}
int main()
{
	int t,n; cin>>t;
	while(t--)
	{
		string s;
		cin>>n;
		cin>>s;
		string a,b;
		process(s, &a, &b);
		cout<<a<<endl<<b<<endl;
	}
	return 0;
}
