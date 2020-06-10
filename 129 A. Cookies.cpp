#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;
int main()
{	
	string s1;
	while(cin>>n)
	{	
		sum=0;
		int evens=0,odds=0,ans;
		while(n--)
		{
			cin>>k;
			(k%2)?odds++ : evens++;
			sum+=k;
		}
		
		(sum%2)  ? ans= odds : ans = evens;
		
		cout<<ans<<endl;
	}
    return 0;
}
