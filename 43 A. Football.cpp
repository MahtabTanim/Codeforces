#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s;
	std::map<string, int> ma;
	map<string, int> ::iterator it;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		ma[s]++;
	}
	it=ma.begin();
	if(ma.size()==1) cout<<(it->first)<<endl;
	else {
		string s1,s2;
		int score_1=it->second;
		s1=it->first;
		it++;
		int score_2=it->second;
		s2=it->first;
		if(score_1>score_2) cout<<s1<<endl;
		else cout<<s2<<endl;
	}	
	
return 0;
}
