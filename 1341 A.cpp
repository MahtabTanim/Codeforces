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
        int n,a,b,c,d,x,y;
        cin>>n>>a>>b>>c>>d;
        x=n*(a-b),y=n*(a+b);
        if(x<=(c+d) && y>=(c-d) ) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }
return 0;
}
