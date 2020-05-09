#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,j;
    cin>>n;
    m=0;
    for(int i=0;i<n;i++)
    {
    	cin>>j ; m+=j;
    }
    int count=0;
    for(int i=1;i<=5;i++)
    {
    	if((m+i)%(n+1)!=1) count++;
    }
    cout<<count<<endl;
    return 0;
}
