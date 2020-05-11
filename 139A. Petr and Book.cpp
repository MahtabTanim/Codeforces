#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p; cin>>n; 
	int sum=0;
	int x[8];
	for(int i=1;i<=7;i++) cin>>x[i];
	int i=1;
	while(sum<n)
	{
		if(i>7) i=1;
		sum+=x[i];
		if(sum>=n) {
			cout<<i<<endl;
			break;
		}
		i++;
	}
	return 0;
}
