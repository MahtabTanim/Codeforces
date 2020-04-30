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
    int n,j; cin>>n;
    map<int,int> x;
    map<int,int> :: iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>j; x[j]++;
    }
    int max=0;
    for(it=x.begin();it!=x.end();it++)
    {
        int temp=it->second;
        if(temp>max) max=temp;
    }
cout<<max<<endl;
End;
}
