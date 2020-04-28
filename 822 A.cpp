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
#define i64 long long
long long  fact(long long N)
{
    if(N==0) return 1;
    return N*fact(N-1);
}
int main()
{
long long a,b;
cin>>a>>b;
long long sum=fact(min(a,b));
cout<<sum<<endl;
End;
}
