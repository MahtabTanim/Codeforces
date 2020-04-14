
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,i,j,d;
        cin>>n;
        bool result=true;
            a=0,b=0;
            for(i=1; i<=n; i++)
            {
                cin>>c>>d;
                if(c<a || d<b || d-b>c-a)
                {
                    result=false;
                }
                a=c;
                b=d;

            }
            if(result)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        
	}
}
