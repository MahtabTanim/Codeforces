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
int main()
{
int t; cin>>t;
while(t--)
{
	long long n,k;
	cin>>n>>k;
	long long count=0;
	if(k==1) cout<<n<<endl;
	else{
			while(n>0)
		{
			
			if(n%k==0) {
				n/=k;
				count++;	
			}
			else {
				count=count+n%k;	
				n=n-n%k;
			}
		}
			cout<<count<<endl;	
	}
	
}
End;
}
