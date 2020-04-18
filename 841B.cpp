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
long long n,k,sum=0,odd=0;
cin>>n;
for(long long i=0;i<n;i++)
{
	cin>>k;
	sum+=k;
	if(k%2==1) odd++;
}
if((sum%2==1) || ((sum%2==0 && odd!=0)) ) cout<<"First"<<endl;
else cout<<"Second";
End;
}

