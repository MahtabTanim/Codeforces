#include <bits/stdc++.h>
 
using namespace std;

int search(long long A[],int n, long long q)
{
	int lo=0,hi=n-1,mid ,index;
	if(A[0]> q) return 0;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		if(A[mid]==q) return mid;
		if(A[mid]>q)
		{
			index=mid;
			hi=mid-1;
		}
		else
		{
			lo=mid+1;
		}
	}
	return index;
}

int main() {
	int n,m;
	long long q;
	cin>>n>>m;
	long long A[n];
	for(int i=0;i<n;i++) cin>>A[i];
	for(int i=1;i<n;i++) A[i]=A[i]+A[i-1];
	while(m--)
	{
		cin>>q;
		int lower= search(A,n,q);
		cout<<lower+1<<" ";
		if(q<=A[0]) cout<<q<<endl;
		else cout<<q-A[lower-1]<<endl;
	}
return 0;
}
