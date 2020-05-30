#include <bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int t,n,m,a,q,l,r,tcase=0;
string s;
int main()
{
    cin>>n>>q>>s;

    map<char,int> ma;
    map<char,int> ::iterator it;

    for(int i=0;i<n;i++)
    {
        ma[s[i]]++;
    }
    int mi=n;
    for(it=ma.begin();it!=ma.end();it++) if(it->second < mi) mi= it->second;
    if(ma.size()<q) mi=0;
    cout<<mi*q<<endl;
}
