#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,j; cin>>n;
	double sum=0;
	for(int i=0;i<n;i++) {
		cin>>j;
		sum+=j;
	}
	cout<<fixed<<setprecision(10)<<sum/n<<endl;
    return 0;
}
