#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int 
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;    
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0;
string s;

int main()
{
	map<string,int> M;
	cin>>n;
	while(n--)
	{
		cin>>s;
		M[s]++;
		if(M[s]==1) cout<<"OK\n";
		else cout<<s<<M[s]-1<<endl;
	}
  return 0;
}
