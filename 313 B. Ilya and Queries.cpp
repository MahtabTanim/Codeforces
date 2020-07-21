#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 1378
#define maxn 1000000
#define FP ff.open("output.txt")
#define FR ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;
int main()
{   
    MP;
    cin>>s;
    int len = s.size();
    int A[len+2]={0};
    for(int i = 0;i<len;i++){
    	if(s[i]==s[i+1]) A[i]=1;
		}
		for(int i = 1;i<len;i++){
    	A[i]+=A[i-1];
		}
		for(int i = len;i>=1;i--)
		{
			A[i]=A[i-1];
		}
		A[0]=0;
		cin>>n;
		while(n--)
		{
			cin>>l>>r;
			cout<<A[r-1]-A[l-1]<<endl;			
		}
			
    return 0;
}
