#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
 int n,j; cin>>n;
 int v[8]={0};
 bool res=true;
 for(int i=0;i<n;i++)
 {
 	cin>>j;
 	v[j]++;
 	if(j==5 || j==7 ) res=false;
 }
 std::vector<string> results;
 while(v[1] && v[2] && v[4])
 {
 	string s="1 2 4";
 	results.push_back(s);
 	v[1]--,v[2]--,v[4]--;
 }
 while(v[1] && v[2] && v[6])
 {
 	string s="1 2 6";
 	results.push_back(s);
 	v[1]--,v[2]--,v[6]--;
 }
 while(v[1] && v[3] && v[6])
 {
 	string s="1 3 6";
 	results.push_back(s);
 	v[1]--,v[3]--,v[6]--;
 }
 if(v[1]|| v[2] || v[3] || v[4] || v[6]) res=false;
 if(!res ){
 	cout<<-1<<endl;
 	return 0;
 }
 for(int i=0;i<results.size();i++) cout<<results[i]<<endl;

return 0;
}
