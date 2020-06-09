#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define size 1000002
fstream ff;
int cou[size];
long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

string s;
int main()
{	
	cin>>n;
	long long  countz=0,neg=0,pos=0,negones=0;
	while(n--)
	{
		cin>>k;
		if(k==0) countz++;
		else if(k<0) 
		{
			 neg+=(k+1) * -1;
			 negones++;			
		}
		else 
		{
			if(k>1) pos+=k-1;
		}
	}
	long long  ans;
	ans = pos+neg+countz;
	if(negones%2 && !countz) ans+=2; 
	cout<<ans<<endl;
	
    return 0;
}
