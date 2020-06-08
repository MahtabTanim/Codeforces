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
    int n;
    bool status[3002] = {false};
    cin>>n;
    for(int i=1;i<=n;++i)
    {
    	cin>>k;
    	status[k]=true;
	}
	for(int k=1;k<=3001;++k) if(status[k]==false) {
		cout<<k<<endl;
		return 0;
	}
    return 0;
}
