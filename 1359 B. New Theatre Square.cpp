#include <bits/stdc++.h>
using namespace std;

int xx(int count , int one, int two)
{
    int x= min(count * one , (count/2)*two + (count%2) * one);

    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m, p_one, p_two,ans=0;
        cin>>n>>m>>p_one>>p_two;
        string s;
        for(int i=0; i<n; i++)
        {
            int count =0;
            cin>>s;
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]=='.')
                    count++;
                else
                {
                    ans+=xx(count, p_one, p_two);
                    count =0;
                }
            }
            ans+=xx(count, p_one, p_two);
        }
        cout<<ans<<endl;
    }
    return 0;
}
