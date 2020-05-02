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
    int n,mod,p_10; cin>>n;
    if(n>=0) cout<<n<<nl;
    else{
        n=fabs(n);
        int x,y;
        x=n/10;
        mod=n%10;
        p_10=(n%100)/10;
        y=((n-p_10*10)/10)+mod;
        x=-x,y=-y;
        cout<<max(x,y)<<endl;
    }
End;
}
