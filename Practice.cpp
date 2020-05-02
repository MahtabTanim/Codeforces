#include <iostream>
#include <stdio.h>
#include <cmath>
#include<algorithm>
using namespace std;
int main()
{
    	int a,b,c,res;
    	bool f=false;
	    cin>>a>>b>>c;
	    if(a>b) res=1;
	    else if (b>a) res=-1;
	    else res=0;
	    if((a+c)>=b && res==(-1)) f=true;
	    if((b+c)>=a && res==1) f=true;
	    if(res==0)
	    {
	    	if((a+c)>b) f=true;
	    	if((b+c)>a) f=true;
	    }
	    if(f) cout<<"?"<<endl;
	    else {
	    	if(res==1) cout<<"+";
	    	else if(res==(-1)) cout<<"-";
	    	else cout<<0<<endl;
	    }

    return 0;
}
