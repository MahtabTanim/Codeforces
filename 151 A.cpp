#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int mili=k*l;
	int slices=c*d;
	mili/=nl;
	int salts=p/np;
	int ans=min(slices,mili);
	ans=min(ans,salts);
	cout<<ans/n<<endl;
	return 0;
}
