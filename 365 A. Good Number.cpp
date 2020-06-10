#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;

int main()
{	
	cin>>n>>k;
	int count=0;
	while(n--)
	{
		bool status[k+1]={false};
		cin>>m;
		while(m>0)
		{
			if((m%10)<=k)
			{
				status[m%10]=true;
			}
			m/=10;
		}
		bool res=true;
		for(int i=0;i<=k;i++) if(status[i]==false) res=false;
		if(res) count++;
	}
	cout<<count<<endl;		
return 0;
}
