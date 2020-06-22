#include <bits/stdc++.h>
using namespace std;
int main()
{
    	int n,k;
    	cin>>n;
    	std::vector<int> v;
    	for(int i=0;i<n;i++){
    		cin>>k; v.push_back(k);
    	}
    	sort(v.begin(),v.end());
    	int sum=0;
    	int count=0;
    	for(int i=0;i<n;i++)
    	{
    		sum+=fabs(v[i]-v[i+1]);
    		i++;
    	}
    	cout<<sum<<endl;
     return 0;
}
