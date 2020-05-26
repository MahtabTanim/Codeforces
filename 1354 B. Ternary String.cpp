#include <bits/stdc++.h>
using namespace std;

int search(string s)
{
    int mi=200001,p1,p2,p3;
    bool one=false, two=false, three=false;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            one=true;
            p1=i;
        }
        else if(s[i]=='2')
        {
            two=true;
            p2=i;
        }
        else
        {
            three=true;
            p3=i;
        }
        if(one && two && three)
        {
            int d=min(p1,p2);
            d=min(d,p3);
            mi=min(mi,i-d+1);
        }
    }
    return mi;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int res=search(s);
        cout<<res%200001<<endl;
    }
    return 0;
}
