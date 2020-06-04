#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
fstream ff;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long > v,v1;
        for(long long i=0;i<n;i++)
        {
            cin>>j;
            v.pb(j);
        }
        sort(v.begin(),v.end());
        long long j=0,i;
        bool status=true;
        while(true)
        {   j++;
            v1.clear();
            status=true;
            for(i=0;i<n;i++)
            {
                long long temp=v[i];
                temp=temp^j;
                v1.push_back(temp);
            }
            sort(v1.begin(),v1.end());
            if(v1==v)
            {
                cout<<j<<endl;
                break;
            }
            if(j>(v[n-1])*2)
            {
                cout<<-1<<endl;
                break;
            }
        }
    }

    return 0;
}
