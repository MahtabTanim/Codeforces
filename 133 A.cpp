#include <bits/stdc++.h>
using namespace std;
int main()
{	string s; cin>>s;
	for(int i=0;i<s.length();i++)
	{
		int temp=s[i];
		if(temp=='H' || temp=='Q' || temp=='9' )
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
    return 0;
}
