#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,j,n,count,m,k,min;
    while(t--)
    {
        cin>>n;
        int num[n];
        int max=0;
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(i=1;i<n;i++)
        {
            int dif=fabs(num[i]-num[i-1]);
            if(dif%2==1) {
            	cout<<"NO"<<endl;
            	max=1;
            	break;
			}
        }
        if(!max) cout<<"YES"<<endl;
        
    }
}
