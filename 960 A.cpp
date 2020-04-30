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
    string s;
    int a=0,b=0,c=0;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='a')
            a++;
        else if(s[i]=='b')
            b++;
        else if(s[i]=='c')
            c++;
    }
    bool res=false;
    if(s[0]!='a')
        res=true;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]=='a')
        {
            for(int j=0; j<i; j++)
            {
                if(s[j]=='b' || s[j]=='c')
                {
                    res=true;
                    break;
                }
            }
        }
        else if(s[i]=='b')
        {
            for(int j=0; j<i; j++)
            {
                if(s[j]=='c')
                {
                    res=true;
                    break;
                }
            }
            for(int j=i+1; j<s.length(); j++)
            {
                if(s[j]=='a')
                {
                    res=true;
                    break;
                }
            }

        }
        else if(s[i]=='c')
        {
            for(int j=i+1; j<s.length(); j++)
            {
                if(s[j]=='a'|| s[j]=='b')
                {
                    res=true;
                    break;
                }
            }
        }

    }
    if(res)
        cout<<"NO"<<endl;
    else if(a && b)
    {
        if(c==a || c==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;

    End;
}
