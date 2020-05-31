#include <bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  t,n,m,a,q,b,l,r,tcase=0;
string s;
int main()
{
        cin>>a>>b>>l;
        if(a%l) a=a/l+1;
        else a=a/l;
        if(b%l) b=b/l+1;
        else b=b/l;
        long long ans=a*b;
        cout<<ans<<endl;
    return 0;
}
