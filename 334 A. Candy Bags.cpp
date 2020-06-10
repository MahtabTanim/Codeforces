#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{	
	//ff.open("output.txt");
    cin>>n;
		i=1,j=n*n;
		for(int k=1;k<=n;k++)
		{
			for(int x=1;x<=n/2;x++) 
			{
				cout<<i<<" "<<j<<" ";
				i++,j--;
			}
			cout<<endl;
		}
    return 0;
}
