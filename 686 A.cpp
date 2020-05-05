#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,q; cin>>n>>q;
	char c;
	long long  sum=q,j;
	int d=0;
	for(int i=0;i<n;i++) {
		cin>>c>>j;
		if(c=='+') sum+=j;
		else{
			if(j<=sum) {
				sum-=j;
			}else d++;
		}
	}
	cout<<sum<<" "<<d<<endl;
    return 0;
}
