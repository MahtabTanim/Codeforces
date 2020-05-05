#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,j; cin>>n;
	int max=-1,min=101;
	int min_pos,max_pos;
	for(int i=0;i<n;i++) {
		cin>>j;
		if(j>max){
			max=j;
			max_pos=i;
		}
		if(j<=min)
		{
			min=j;
			min_pos=i;
		}
	}
	int steps=fabs(max_pos-0)+fabs(min_pos-(n-1));
	if(min_pos<max_pos)steps--;
	cout<<steps<<endl;
    return 0;
}
