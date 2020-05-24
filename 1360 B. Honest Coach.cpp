    #include<bits/stdc++.h>
    using namespace std;
    int main()
    { 
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n,j;
    		cin>>n;
    		std::vector<int> v;
    		for (int i = 0; i < n; ++i)
    		{
    			cin>>j;
    			v.push_back(j);
    		}
    		sort(v.begin(),v.end());
    		int min_dif=1000000;
    		for(int i=1;i<n;i++) 
    		{
    			if(fabs(v[i]-v[i-1]) < min_dif) min_dif= fabs(v[i]-v[i-1]);
    		}
    		cout<<min_dif<<endl;
    	}
    return 0;
    }
