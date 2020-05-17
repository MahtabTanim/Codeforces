#include<bits/stdc++.h>
using namespace std;
//Case 9 11
//g++ p.cpp -o p.exe
//Case 999999994 108004280 999952921
//Case 9 26 2
long long summ( long long n) 
{ 
	return (n*(n+1))/2;
}

long long sear( long long n, long long k)
{
	if(n==1 && k==1) return 0;
	long long lo=0,hi=n,mid;
	long long sum,eaten;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		sum=summ(n-mid);
		if(mid+k== sum) return mid;
		else if(mid+k> sum) hi=mid-1;
		else lo= mid+1;
	}
	return mid;
}

int main()
{
	long long n,k ; 
	
	cin>> n >> k;

	long long ans= sear( n, k);

	cout<<ans<<endl;
return 0;
}
