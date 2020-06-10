#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;
int main()
{	
	ff.open("output.txt");
	while(cin>>n>>k)
	{	
		int i=0,j=0;
		while(k--)
		{
			cout<<n<<" ";
			n--;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
    return 0;
}
