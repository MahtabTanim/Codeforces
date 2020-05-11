#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	if(n==1) {
		int x; cin>>x;
		if(x) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	} else {
		int c=0,j;
		for(int i=0;i<n;i++) {
			cin>>j;
			if(j==0) c++;
			if(c==2) {
				cout<<"NO"<<endl;
				return 0;
			}
		}
		if(c)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
return 0;
}
