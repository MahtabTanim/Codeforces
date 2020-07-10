#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 101
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

bool isprime(ll x)
{
    if(x<=1) return false;
    for(int i = 2; i*i<=x; i++)
    {
        if(x%i==0) return false;
    }
    return true;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>x;
        ll sq = sqrt(x);
        if((ll) sq*sq == x)
        {
            if(isprime(sq)) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
