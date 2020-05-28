#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,must,ans;
        cin>>n>>m>>k;
        must= n/k;
        if(m<=must) ans=m;
        else
        {
            int max_other = (m-must)/(k-1);
            if((m-must)%(k-1)) max_other++;
            ans=fabs(must-max_other);
        }
        cout<<ans<<endl;
    }
    return 0;
}
