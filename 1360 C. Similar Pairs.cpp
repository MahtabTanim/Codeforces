#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int A[n],evens=0,odds=0;
		std::vector<int> even;
		std::vector<int> odd;
		for(int i=0;i<n;i++) 
		{
			cin>>A[i];
			if(A[i]%2) 
			{
				odds++;
				odd.push_back(A[i]);
			}
			else 
			{
				even.push_back(A[i]);
				evens++;
			}
		}
		if(evens%2==0 && odds %2==0) cout<<"YES"<<endl;
		else
		{
			bool res=false;
			for(int i=0;i<even.size();i++)
			{
				int temp=even[i];
				for(int j=0;j<odd.size();j++)
				{
					if(fabs(odd[j]-temp)==1) 
					{
						res=true;
						break;
					}
				}
			}
			if(res) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
return 0;
}
