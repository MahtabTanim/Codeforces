#include<bits/stdc++.h>
using namespace std;
long long  ff(long long n)
{
	int a=2,d=3;
	long long x=a+(n-1)*d;
	long long sum=(n*(2+x))/2;
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
{
		long long  count=0,i=0,q;
		long long sum=0;
		cin>>q;
		while(q>1)
		{
			sum=0;
			i=0;
			sum=ff(i);
			while(sum<q)
			{
				i++;
				sum=ff(i);
				if(sum>q) {
					sum=ff(i-1);
					break;
				}
			}
			q=q-sum;
			count++;
		}
		cout<<count<<endl;

}
	return 0;
}
