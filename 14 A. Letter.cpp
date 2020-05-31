#include <bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

//fstream ff;

long long  t,n,m,a,q,b,l,r,tcase=0;
string s;
int main()
{
    cin>>n>>m;
    bool f=false;
    int first=m,last=0,fi,li;
    vector<string> v;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
        for(int j=0; j<m; j++)
        {
            if(s[j]=='*')
            {
                if(j<first)
                    first=j;
                if(j>last) last=j;
                if(f==false)
                {
                    fi=i;
                    f =true;
                }
                li=i;
            }

        }
    }

    for(int i=fi; i<=li; i++)
    {

        for(int j=first; j<=last; j++)
            cout<<v[i][j];
            putchar('\n');
    }

    return 0;
}
