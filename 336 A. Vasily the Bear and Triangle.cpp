#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

long long extra,x,y,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;
string s;

int main()
{	
	while(cin>>x>>y)
	{	
		pair<int,int> a,b;
		long long xx=(x<0) ? x-(fabs(y)) : x+fabs(y);
		a.first=xx,a.second=0;
		long long yy=(y<0) ? y-(fabs(x)) : y+fabs(x);
		b.first=0,b.second=yy;
		if(a.first>b.first)
		{
			swap(a.first,b.first);
			swap(a.second,b.second);
		}
		cout<<a.first<<" "<<a.second<<" "<<b.first<<" "<<b.second<<endl;
	}
    return 0;
}
