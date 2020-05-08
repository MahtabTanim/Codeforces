#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q; cin>>n;
    int x[100001];
    for(int i=1;i<=n;i++)
    {
    	cin>>q;
    	x[q]=i;
    }
    long long  t,p,a=0,b=0;
    cin>>t;
    while(t--)
    {
    	cin>>p;
    	a+=x[p];
    	b+=n-x[p]+1;
   }
    cout<<a<<" "<<b<<endl;
    return 0;
}
