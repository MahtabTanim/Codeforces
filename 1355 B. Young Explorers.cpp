    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t; cin>>t;
    	while(t--)
    	{
    		int n,j;
    		cin>>n;
    		std::map<int, int> mp;
    		std::map<int, int> ::iterator it;
    		for(int i=0;i<n;i++) {
    			cin>>j;
    			mp[j]++;
    		}
    		int count=0,temp=0;
    		for(it=mp.begin();it!=mp.end();it++)
    		{
    			int x=it->first;
    			int y=it->second + temp;
    			count+=y/x;
    			temp=y%x;
    		}
    		cout<<count<<endl;
    	}
     
    return 0;
    }
