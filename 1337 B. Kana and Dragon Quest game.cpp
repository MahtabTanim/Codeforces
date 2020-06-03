#include <bits/stdc++.h>

using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  num[100001];

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{

    cin>>t;
    while( t--)
    {
        cin>>x>>n>>m;
        while(n--)
        {
            if(x<=20) break;
            x=x/2+10;
        }
        x=x-m*10;
        if(x<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
