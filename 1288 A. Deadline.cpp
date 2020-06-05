#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
bool solve (long long n, long long d)
{
    int lo=0,hi=n,mid=0;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        int sum= mid+(ceil((double) d /(mid+1)));
        if(sum<=n) return true;
        else  lo=mid+1;
    }
    return false;
}

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        bool res=solve(n,d);
        (res)?cout<<"YES\n":cout<<"NO\n";
    }

    return 0;
}
