#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long a,b;
	while(cin>>a>>b)
	{
		if(!a && !b) break;
		int count=0;
		int temp=0,carry=0;
		while(a|| b)
		{
			temp=(a%10+b%10+temp);
			count+=temp/10;
			temp/=10;
			a/=10,b/=10;
		}
		if(count==0) cout<<"No carry operation.\n";
		else if(count==1) cout<<"1 carry operation.\n";
		else cout<<count<<" carry operations.\n";
	}
return 0;
}
