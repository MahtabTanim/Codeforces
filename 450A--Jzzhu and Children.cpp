#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n>>m;
    std::vector<pair<int ,int > > v;
    for(int i=1;i<=n;i++)
    {
    	cin>>j ; v.push_back(make_pair(j,i));
    }
    int len=v.size();
    while(len>1)
    {
    	if(v[0].first>m) {
    		v.push_back(make_pair(v[0].first-m,v[0].second));
    	}
    	v.erase(v.begin()+0);	
    	len=v.size();
    }
    cout<<v[0].second<<endl;
    return 0;
}
