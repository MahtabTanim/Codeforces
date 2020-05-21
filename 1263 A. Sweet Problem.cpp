#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
 int t;
 int x[3];
 cin>>t;
 while(t--)
 {
 	cin>>x[0]>>x[1]>>x[2];
 	sort(x,x+3);
 	int dif=x[2]-x[1];
 	if(x[0]<dif)
 	{
 		x[1]+=x[0];
 	}
 	else{
 		x[1]+=dif;
 		x[0]-=dif;
 		x[1]+=x[0]/2;
 		x[2]+=(x[0]-(x[0]/2));
 	}
 	cout<<min(x[1],x[2])<<endl;
 }
}
