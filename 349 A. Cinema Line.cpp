#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{	
    int n;
    cin>>n;
    int t25=0,t50=0;
    bool res= true;
    while(n--)
    {
    	cin>>k;
    	if(k==25) t25++;
    	else if(k==50)
    	{
    		t50++;
    		if(t25) t25--;
    		else res=false;
		}
		else
		{
			if(t25)
			{
				if(t50) t25--,t50--;
				else if(t25>=3) t25-=3;
				else res=false;
			}
			else res=false;
		}
	}
	if(res) cout<<"YES\n";
	else cout<<"NO\n";
    return 0;
}
