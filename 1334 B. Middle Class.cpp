#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;
string s="";

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
//77774443
int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
    	long long  n,x;
	    cin>>n>>x;
	    long long count = 0, over=0;
	    vector<long long > needed;
	    while(n--)
	    {
	    	cin>>k;
	    	if(k>=x)
	    	{
	    		if(k>x) over+=k-x;
	    		count++;
			}
			else needed.pb(x-k);
		}
		sort(needed.begin(),needed.end());
		int i=0;
		for(int i=0;i<needed.size();++i)
		{
			if(needed[i]<=over && over) 
			{
				count++;
				over-=needed[i];
			}
		}
		cout<<count<<endl;
	}
	
    return 0;
}
