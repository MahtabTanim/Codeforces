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
	int n,a,b,i,j,temp,count=0;
	cin>>n>>a>>b;
	string s="";
	for(i=1;i<=n;i+=a)
	{
		count=0;
		temp=97;
		for(j=1;j<=a;j++)
		{
			
			if(count==b) {
				temp=97;
				count=0;
			}
			s.push_back(temp);
			temp++;
			count++;
		}
	}
	for(int i=0;i<n;i++) cout<<s[i];
	cout<<nl;
	}
End;
}

