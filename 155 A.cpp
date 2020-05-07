#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	int max=0,min=100001,count=0,a;
	cin>>a;
	max=a,min=a;
	for(int i=1;i<n;i++)
	{
		cin>>a;
		if(a>max) {
			max=a;
			count++;
		}
		if(a<min) {
			min=a;
			count++;
		}
	}
	//((count-2)>=0)?count=count-2 : count=0;
	cout<<count<<endl;
	return 0;
}
