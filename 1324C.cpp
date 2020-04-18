#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,j,n,count,m,k,min;
    while(t--)
    {
        string s;
        cin>>s;
        count=0;
        int m=0;
        int len=s.length();
        for(i=0; i<len; i++)
        {
            if(s[i]=='L')
            {
            	count++;
			}
			else{
				if(count>m) m=count;
				count=0;
			}
        }
	m=max(count,m);
	cout<<m+1<<endl;
    }
}
