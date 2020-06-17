#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 
fstream ff;

ll a,b,c,d,e,f,count,n,m,k,i,j,t;
string s;

vector<int> primes;

bool status[1001];

void sieve()
{
	int n=1000;
	for(int i=2;i*i<=n;i++)
	{
		if(status[i]==0)
		{
			for(int j= i*i;j<=n;j+=i) status[j]=1;
		}
	}
	for(int i=2;i<=n;i++) if(status[i]==0) primes.pb(i);
}

int main()
{
	sieve();
	cin>>n>>k;
	int count=0;
	for(i=0;i<primes.size()-1;++i)
	{
		int sum=primes[i]+primes[i+1]+1;
		if(sum>n) break;
		if(status[sum]==0) 
		{
			count++;
		}
	}
	if(count>=k) cout<<"YES"; else cout<<"NO"<<endl; 
return 0;
}
