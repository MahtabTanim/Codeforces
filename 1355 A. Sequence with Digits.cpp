#include<bits/stdc++.h>
using namespace std;
long long f(long long  x)
{	long long xx=x;
	long long min=11,max=0;
	while(x!=0) {
		long long  temp=(long long)x%10;
		if(temp==0) return 0;
		if(temp<min) min=temp;
		if(max<temp) max=temp;
		x=x/10;
	}
return (min*max);
}
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long  n,k; cin>>n >> k;
		for(long long i=2;i<=k;i++)
		{
			long long ff=f(n);
			if(ff==0) break;
			n+=ff;
		}
		cout<<n<<endl;
	}
	
return 0;
}
