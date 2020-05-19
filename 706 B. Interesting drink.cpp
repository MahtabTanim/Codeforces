#include<bits/stdc++.h>

using namespace std;
#define MAXN 1000090

int search(int numbers[ ], int n, int money)
{
	int lo=0, hi=n-1, mid ,index;
	if(money >= numbers[hi]) return n;
	while (lo<=hi)
	{
		mid=lo+ (hi-lo)/2;
		if(numbers[mid]==money)
		{
			lo=mid+1;
		} 
		else if(numbers[mid] > money)
		{
			index=mid;
			hi=mid-1;
		}
		else {
			lo=mid+1;
		}
	}
return index;
}


int main()
{
	int n;
	cin>>n;

	int numbers[n];
	for(int i=0;i<n;i++)
	{
		cin>>numbers[i];
	}
	sort(numbers,numbers+n);

	int q,money;
	cin>>q;
	while(q--)
	{
		cin>>money;
		cout<<search(numbers,n,money)<<endl;
	}
	
return 0;
}
