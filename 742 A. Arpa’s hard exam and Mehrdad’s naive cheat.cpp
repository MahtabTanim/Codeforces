#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

int process(ll n)
{
    ll ans = 1, x = 8;
    while(n)
    {
        if(n%2==0){
            x = x*x;
            x=x%10;
            n= n/2;
        }
        else {
            ans = ans * x;
            n--;
        }
    }
    return ans%10;
}
int main()
{
    FP;
    //cin>>t;
    t=1;
    while(t--)
    {
        cin>>n;
        cout<<process(n)<<endl;
    }
    return 0;
}
