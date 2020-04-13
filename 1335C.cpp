// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int i,j,count;
	std::map<int,int> x;
	int dis=0,max=0,copies=0;
	map<int,int> ::iterator it;
	for(i=1;i<=n;i++)
	{
		cin>>j;
		x[j]++;
		if(x[j]>max) max=x[j];
	}
	int  s=x.size();
	if(max==s) max--;
	cout<<min(s,max)<<endl;
	
}
End;
}

