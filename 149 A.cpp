#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	int x[12];
	for(int i=0;i<12;i++)
    {
        cin>>x[i];
    }
    sort(x,x+12);
	int j=11;
	int sum=0;
	int count =0;
	while(sum<n && j>=0)
	{	count++;
		sum+=x[j];
		j--;
	}
	if(sum<n) cout<<-1<<endl;
    else cout<<count<<endl;
return 0;
}
