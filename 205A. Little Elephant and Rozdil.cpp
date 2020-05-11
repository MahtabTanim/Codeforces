#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j,min=1000000000;
	cin>>n; 
	vector<int> v;
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		cin>>j; v.push_back(j);
		if(j<min) {
			min=j;
			ans=i;
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
		{
			if(v[i]==min) count++;
			if(count>=2) break;
		}
	 if(count==1) cout<<ans<<endl;
	else cout<<"Still Rozdil\n";
return 0;
}
