    #include<bits/stdc++.h>
    using namespace std;
    int main()
    { 
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int a,b;
    		cin>>a>>b;
     
    		int ans;
    		int mi=min(a,b);
    		if(2*mi<max(a,b))
    		{
    			mi=max(a,b);
    			ans=mi*mi;
    		}
    		else 
    		{
    			mi=2*mi;
    			ans=mi*mi;
    		}
    		cout<<ans<<endl;
    	}
    return 0;
    }
