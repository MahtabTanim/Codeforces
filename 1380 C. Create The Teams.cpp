#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000000
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;
int main()
{   
    cin>>t;
    while(t--)
    {
			cin>>n>>x;
			vector<int> v(n);
			for(int i = 0;i<n;i++) cin>>v[i];
			sort(v.begin(),v.end());
			int count = 0 , min ,c = 0 ;
			for(int i = n-1 ;i>=0 ;i--)
			{
				if(v[i]>x) count++;
				else
				{
					c++;
					min=v[i];
					if(min*c>=x)
					{
						count++ ;
						c = 0;
					}
				}
			}
			cout<<count<<endl;
		}
    return 0;
}
