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
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
    	cin>>n>>m;
    	int A[n][m];
    	for(int i=0;i<n;++i)
    	{
    		for(int j=0;j<m;++j) cin>>A[i][j];
		}
		int count =0;
		bool status ;
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<m;++j)
			{
				status=true;
				if(A[i][j]==0)
				{
					for(int k=0;k<m;++k) if(A[i][k]==1) status= false;
					for(int k=0;k<n;++k) if(A[k][j]==1) status =false;
					if(status == true) A[i][j]=1, count++;
				}
			}
		}
		if(count % 2==0) cout<<"Vivek\n";
		else cout<<"Ashish\n";
	}
    return 0;
}
