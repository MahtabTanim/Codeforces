#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int sum=0;
	int res=0;
	int i=1;
	while(sum<=(240-k))
    {

        sum+=(i*5);
        if(sum>(240-k)){
            break;
        }
        if(sum<=(240-k) ) res++;
        i++;
    }
    cout<<min(res,n)<<endl;
return 0;
}
