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
int n; cin>>n;
int x[n];
int max=0,temp=0;
for(int i=0;i<n;i++)
{
        cin>>x[i];
        if(x[i]>max)max=x[i];
}
for(int i=0;i<n;i++)
{
    temp+=max-x[i];
}
cout<<temp;
End;
}
