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
		string s1;
		cin>>s;
		s1.pb(s[0]);
		for(int i=1;i<s.length();i+=2) s1.pb(s[i]);
		cout<<s1<<endl;
	}
return 0;
}
