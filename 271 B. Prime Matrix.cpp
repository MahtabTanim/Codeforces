#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000003
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;


vector<int> primes;

bool status [ maxn];

void sieve()
{
	memset(status,false,maxn);
	for(int i = 2;i*i<=maxn;i++){
		if(status[i]==false){
			for(int j = i*i;j<=maxn;j+=i){
				status [ j] = true;
			}
		}
	}
	for(int i = 2;i<maxn;i++){
		if(status[i]==false ) primes.pb(i);
	}
}

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;
int main() {
	FP;
	sieve();
	cin>>n>>m;
	int M[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>a;
			int up = lower_bound(primes.begin(),primes.end(),a)-primes.begin();
			M[i][j]=primes[up]-a;
		}
	}
	int ans = mod;
	for(int i = 0;i<n;i++){
		int c= 0;
		for(int j = 0;j<m;j++){
			c+=M[i][j];
		}
		ans = min(c,ans);
	}
	for(int i = 0;i<m;i++){
		int c= 0;
		for(int j = 0;j<n;j++){
			c+=M[j][i];
		}
		ans = min(c,ans);
	}
	cout<<ans<<endl;
	return 0;
}
