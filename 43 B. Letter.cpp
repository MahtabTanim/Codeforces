#include <bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

map<char,int> m1,m2;

void inp(string s , bool f)
{
    int len= s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            if(f) m1[s[i]]++;
            else m2[s[i]]++;
        }
    }
}

int main()
{
    MP;
    map<char,int> m1,m2;
    string s;
    getline(cin,s);
    int len= s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            m1[s[i]]++;
        }
    }
    getline(cin,s);
    len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            m2[s[i]]++;
        }
    }
    bool f= true;
    map<char,int> :: iterator it;
    for(it=m2.begin();it!=m2.end();it++)
    {
        if(it->second > m1[it->first]) f=false;
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
