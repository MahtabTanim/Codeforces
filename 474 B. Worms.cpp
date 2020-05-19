#include<bits/stdc++.h>

using namespace std;
#define MAXN 1000090

int search(int numbers[ ], int n, int money)
{
	int lo=0, hi=n-1, mid ,index;
	if(money <= numbers[lo]) return 1;
	while (lo<=hi)
	{
		mid=lo+ (hi-lo)/2;
		if(numbers[mid]== money) return mid+1;
		else if(numbers[mid]<money) 
		{
			lo=mid+1;
		}
		else 
		{
			hi=mid-1;
			index=mid;
		}
	}
return index+1;
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
	//sort(numbers,numbers+n);

	for(int i=1;i<n;i++)
	{
		numbers[i]+= numbers[i-1];
	}

	int q,money;
	cin>>q;
	while(q--)
	{
		cin>>money;
		cout<<search(numbers,n,money)<<endl;
	}
	
return 0;
}B. Worms
