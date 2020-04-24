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
        string s;
        cin>>s;
        int len=s.length();
        int sum=0;
        int z=0;
        int e=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='0')
                z++;
            int temp=s[i]-'0';
            if(temp && temp%2==0)
                e++;
            sum+=s[i]-'0';
        }
        if(sum%3==0 && z && ( e ||z>=2))
            cout<<"Red"<<nl;
        else
            cout<<"Cyan"<<nl;

    }
    return 0;
}
