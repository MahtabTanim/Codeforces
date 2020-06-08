#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{	
	cin>>n;
	int temp=0;
	vector<pair<int, int> > vp;
	while(n--)
	{
		cin>>a>>b;
		vp.pb(mp(a,b));
	}
	sort(vp.begin(),vp.end());
	for(int i=0;i<vp.size();++i)
	{
		if(min(vp[i].first,vp[i].second)<temp) temp=max(vp[i].first,vp[i].second);
		else temp=min(vp[i].first,vp[i].second);
	}
	cout<<temp<<endl;
    return 0;
}
