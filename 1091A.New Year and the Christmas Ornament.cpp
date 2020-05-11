#include<bits/stdc++.h>
using namespace std;
struct node{
	int roll;
	node* next;
};

int main()
{
	int y,b,r; cin>>y>>b>>r;
	int mi=min(b,r);
	{
		if(mi==r) b=mi-1;
		else r=mi+1;
	}
	if(y>=b) y=b-1;
	else{
		b=y+1,r=y+2;
	} 
	cout<<y+b+r<<endl;
return 0;
}
