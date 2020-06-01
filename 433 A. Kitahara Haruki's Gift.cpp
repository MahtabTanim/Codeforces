#include <iostream>
#include<iterator>
#include<algorithm>
#include<map>
#include<fstream>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
fstream ff;

long long  t,n,m,a,x,q,b,l,r,i,j,k,tcase=0;

string s;

int main()
{
    int n,one=0,two=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==100) one++;
        else two++;
    }
    int p1=two/2;

    int p2=two /2 + two%2;

    if(p2>p1 && one>=2)
    {
        one-=2;
        if(one%2==0) cout<<"YES"<<endl;
        else cout<<"NO\n";
    }

    else if(p1==p2)
    {
        if(one%2==0) cout<<"YES"<<endl;
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
    return 0;
}
