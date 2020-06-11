#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0,l,r;
string s;

int main()
{	
	ff.open("output.txt");
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>m;
		long long ansr=x,ansl=x;
		
		while(m--)
		{
			cin>>l>>r;
			if((ansl>=l && ansl<=r) || (ansr>=l && ansr<=r))  
			{
				ansl=min(l,ansl);
				ansr=max(r,ansr);
			}
		}
		cout<<ansr-ansl+1<<endl;
	}
return 0;
}
