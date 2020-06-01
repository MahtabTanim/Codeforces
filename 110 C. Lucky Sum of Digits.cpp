#include <bits/stdc++.h>
#include<iterator>
#include<algorithm>
#include<map>
#include<list>
#include<math.h>
#include<fstream>
#define pb push_back
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

long long  p=0,np=0,t,n,m,a,x,q,b,l,r,i,j,k,tcase=0;
string s;

int main()
{
    cin>>n;
    bool status=false;
    for( i=n/7;i>=0;i--)
    {
        for( j=0;j<=n/4;j++)
        {
            if(i*7 + j*4==n)
            {
                for(k=0;k<j;k++) cout<<4;
                for(k=0;k<i;k++) cout<<7;
                return 0;
            }
        }
    }
    cout<<-1<<endl;

return 0;
}
