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

int main()
{
    cin>>n>>m>>a;
    x= 0;
    int count = 0;
    while(n--)
    {
        cin>>l>>r;
        if((l-x)>=a)
        {
            count+=(l-x)/a;
        }
        x=l+r;
    }
    if(fabs(m-x)>=a)
    {
        count+=(abs(m-x))/a;
    }
    cout<<count<<endl;
    return 0;
}
