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
    int s,n,d,bonus;
    cin>>s>>n;
    bool result=true;
    vector<pair<int,int> > round;
    for(int i=0;i<n;i++)
    {
        cin>>d>>bonus;
        round.push_back(make_pair(d,bonus));
    }
    sort(round.begin(),round.end());
    for(int i=0;i<n;i++)
    {
        d=round[i].first,bonus=round[i].second;
        if(d>=s) {
            result=false;
            break;
        }
        s+=bonus;
    }
    if(result) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
End;
}
