// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
int main()
{
int a,b,c;
cin>>a>>b>>c;
if(c%a && c%b) {
    int sum=1,i,j;
    bool x=false;
    for(i=0;i<=10000;i++)
    {
        for(int j=10000;j>=0;j--)
        {
            if(a*i + b*j== c){
                x=true;
                break;
            }
        }
    }
    if(x) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
}
else cout<<"Yes"<<endl;
End;
}
