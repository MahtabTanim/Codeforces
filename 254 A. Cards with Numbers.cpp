#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define maxn 1000000

ll a,b,c,d,e,f,t,m,n,i,j,x,y,count;


int main()
{
	MP;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	cin>>n;
	array<vector<int>,5001> V;
	for(int i=1;i<=n*2;i++)
	{
		cin>>a;
		V[a].pb(i);
	}
	for(int i=0;i<=5000;i++)
	{
		int dd=V[i].size(); 
		if(dd>0 && dd%2) {
			cout<<-1<<endl;
			return 0;
		} 
	}
	for(int i=0;i<=5000;i++)
	{
		for(int j=0 ; j< V[i].size();j++)
		{
			cout<<V[i][j]<<" ";
			if(j%2) cout<<endl;
			
		}
	}
	
}
