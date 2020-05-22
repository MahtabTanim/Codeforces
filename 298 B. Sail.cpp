#include <bits/stdc++.h>
 
using namespace std;

int main() {
	int n,x,y,xx,yy;
	string s;
	cin>>n>>x>>y>>xx>>yy;
	cin>>s;
	int i,res=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='E')
		{
			if(x<xx) x++;
		}
		if(s[i]=='W')
		{
			if(x>xx) x--;
		}
		if(s[i]=='N')
		{
			if(yy>y) y++;
		}
		if(s[i]=='S')
		{
			if(y>yy) y--;
		}
		if(x==xx && y==yy) {
			res=i+1;
			break;
		}
	}
	if(x==xx && y==yy) cout<<res<<endl;
	else cout<<-1<<endl;
return 0;
}
