#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;

bool check(string s)
{
    int j=0;
    while(s[j]=='P') j++;
    int len=s.length();
    for(int i=j;i<len;++i) if(s[i]=='P') return false;
    return true;
}
string process(string s)
{
    int len=s.length();
    for(int i=0;i<len;++i)
    {
        if(s[i]=='A' && s[i+1]=='P')
        {
            s[i+1]='A';
            i++;
        }
    }
    return s;
}

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        bool status = check(s);
        int count=0;
        while(!status)
        {
            count++;
            s=process(s);
            status=check(s);
        }
        cout<<count<<endl;
    }

    return 0;
}
