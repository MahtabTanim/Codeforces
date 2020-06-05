#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
        cin>>n;
        int A[n],z=0,sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>A[i];
            if(A[i]==0)
            {
                z++;
                A[i]=1;
            }
            sum+=A[i];
        }
        if(sum==0) z++;
        cout<<z<<endl;
    }

    return 0;
}
