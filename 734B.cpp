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
long long k2,k3,k5,k6;
cin>>k2>>k3>>k5>>k6;
long long sum=0;
while(k2 && k5 && k6)
{
	k2-=1;
	k5-=1;
	k6-=1;
	sum+=256;
}
while(k3 && k2)
{
	k3-=1;
	k2-=1;
	sum+=32;
}
cout<<sum<<endl;
End;
}

