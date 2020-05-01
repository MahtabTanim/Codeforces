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
    int t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        long long sum1=0,sum2=0;
        sum1=pow(2,n);
        for(int i=1; i<=(n/2)-1; i++)
        {
            sum1+=pow(2,i);
        }
        for(int i=n/2; i<=n-1; i++)
        {
            sum2+=pow(2,i);
        }
        cout<<fabs(sum1-sum2)<<endl;
    }

    End;
}
