#include<bits/stdc++.h>
using namespace std;
//Case 9 11
//g++ p.cpp -o p.exe
//Case 999999994 108004280 999952921
//Case 9 26 2
int main()
{
	long long n; 
	
	cin>> n ;

	int A[n];

	for(int i=0;i<n; i++) cin>> A[i];

	long long sum1=0,sum2=0, left=0,right=n-1,k=0;

	while(left<=right)
	{
		k++;

		if(k%2) 
		{
			if(A[right]>A[left]) 
			{
				sum1+=A[right];
				right--;
			}
			else 
			{
				sum1+=A[left];
				left++;
			}
		}
		else  
		{
			if(A[right]>A[left]) 
			{
				sum2+=A[right];
				right--;
			}
			else 
			{
				sum2+=A[left];
				left++;
			}
		}
	}

	cout<<sum1<<" "<<sum2<<endl;
return 0;
}
