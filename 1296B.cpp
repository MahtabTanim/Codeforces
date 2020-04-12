#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int i=n,profit=0,extra=0;
    profit=profit+i/10;
    extra=i%10;
    i=profit +extra;
    while(i>9)
    {
        profit+=i/10;
        extra=i%10;
        i=i/10+extra;
    }
    cout<<n+profit<<endl;
    }
}
