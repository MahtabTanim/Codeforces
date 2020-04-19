// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<n;i++)
		{
			int temp=s[i]-48;
			if(temp%2) count++;
		}
		if(count>=2) {
			int x=0;
				for(int i=0;i<n;i++)
				{
					int temp=s[i];
					if(x==2) break;
					if(temp%2) {
						x++;
						cout<<s[i];
					}
				}
				cout<<endl;
		}
		else cout<<-1<<endl;
		
	}
return 0;
}

