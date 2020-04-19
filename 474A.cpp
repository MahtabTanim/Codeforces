// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
const string f="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{	
	int x;
	char c;
	cin>>c;
	bool status =false;
	if(c=='R') status =true;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
			for(int j=0;j<f.length();j++)
			{
				if(s[i]==f[j]) {
					if(status) cout<<f[j-1];
					else cout<<f[j+1];
				}
			}
	}

End;
}

