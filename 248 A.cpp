#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b; cin>>n;
	int l_0=0,l_1=0,r_0=0,r_1=0; 
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a==0)l_0++;
		else l_1++;
		if(b==0)r_0++;
		else r_1++;
	}
	int c=l_0+r_0;
	int res=min(c,n*2);
	c=l_1+r_1;
	res=min(res,c);
	c=l_0+r_1;
	res=min(res,c);
	c=l_1+r_0;
	res=min(res,c);
	cout<<res<<endl;
	return 0;
}
