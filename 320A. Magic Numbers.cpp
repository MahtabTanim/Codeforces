#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]!='1' && s[i]!='4') || s[0]!='1')
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if(s[i]=='4'){
			count++;
		}else{
			if(count>2) {
				cout<<"NO"<<endl;
				return 0;		
			}	else count=0;	
		}
	}
	if(count<=2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
