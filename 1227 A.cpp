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
int t;cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int sum=0;
    int l=log10(n);
    sum=sum+9*l;
    int x=0;
    for(int i=0;i<=l;i++)
    {
        x+=pow(10,i);
    }
    sum+=n/x;
    cout<<sum<<endl;
}
End;
}
