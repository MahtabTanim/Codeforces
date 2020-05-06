#include <bits/stdc++.h>
using namespace std;
bool rev(bool x)
{
	if(x) return false;
	else return true;
}
int main()
{	bool status[3][3]={1};
	int x[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++) {
			cin>>x[i][j];
			status[i][j]=1;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			if(x[i][j]%2){
				status[i][j]=rev(status[i][j]);
				if(i-1>=0) status[i-1][j]=rev(status[i-1][j]);
				if(i+1<=2) status[i+1][j]=rev(status[i+1][j]);
				if(j-1>=0) status[i][j-1]=rev(status[i][j-1]);
				if(j+1<=2) status[i][j+1]=rev(status[i][j+1]);
				
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++) cout<<status[i][j];
		cout<<endl;
	}
    return 0;
}
