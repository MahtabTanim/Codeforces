#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,i,j;
    cin>>n;
    int x[n],y[n];
    for(i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    for(i=0;i<n;i++) cin>>y[i];
    sort(y,y+n);
    for(i=n-1;i>=0;i--)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
