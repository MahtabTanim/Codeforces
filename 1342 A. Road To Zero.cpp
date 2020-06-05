#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
   // ff.open("output.txt");
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>a>>b;
        if(n>m) swap(n,m);
        long long cost=0;
        if(a*2<= b) cost = (m+n)*a;
        else cost = n*b + (m-n)*a;
        cout<<cost<<endl;
    }

    return 0;
}
