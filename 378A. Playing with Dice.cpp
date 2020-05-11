#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,d1,d2;
	cin>>a>>b;
	int s1=0,s2=0,z=0;
	for(int i=1;i<=6;i++)
	{
		d1=fabs(i-a);
		d2=fabs(i-b);
		if(d1<d2) s1++;
		else if(d2<d1) s2++;
		else z++;
	}
	cout<<s1<<" "<<z<<" "<<s2<<endl;
return 0;
}
