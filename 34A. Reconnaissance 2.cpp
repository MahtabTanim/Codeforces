#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p; cin>>n; 
	int sum;
	int x[n+1];
	for(int i=1;i<=n;i++)	cin>>x[i];
	int min =1001;
	int a,b;
	for(int i=1;i<n;i++) 
	{
		if(fabs(x[i]-x[i+1])<min) {
			min=fabs(x[i]-x[i+1]);
			a=i,b=i+1;
		}
	}
	if(fabs(x[n]-x[1])<min) {
			a=n;
			b=1;
		}
	cout<<a<<" "<<b<<endl;
	return 0;
}
