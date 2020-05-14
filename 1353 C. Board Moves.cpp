#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--) 
	{
		long long  n; cin>>n;
		long long sum=0;
		for(long long  i=1;i<=n;i+=2)
		{
			long long  mid=(i+1)/2;
			long long  f=i-mid;
			long long x=(i*2)+(i-2)*2;
			sum+=x*f;
		}
		cout<<sum<<endl;
	}
	
return 0;
}
