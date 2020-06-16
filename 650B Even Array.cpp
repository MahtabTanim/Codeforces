#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define ll long long 
fstream ff;

vector<int> vi;

bool status [1000001];


ll a,b,c,d,e,f,count,n,m,k,i,j,t;
string s;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		int even=0, odd=0;
		for(int i=0;i<n;i++)
		{
			cin>>k;
			if(i%2 != k%2)
			{
				if( i%2) odd++;
				else even++;
			}
		}
		if( even == odd) cout<<even<<endl;
		else cout<< -1<<endl;
	}
return 0;
}
