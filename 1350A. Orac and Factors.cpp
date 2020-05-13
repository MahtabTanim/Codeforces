    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t; 
        cin>>t;
    	while(t--)
    	{
    		long long  n,k; cin>>n>>k;
    		long long i;
    		for( i=2;i<=n;i++)
    		{
    			if(n%i==0) break;
    		}
    		n+=i;
    		n=n+(k-1)*2;
    		cout<<n<<endl;
    	}
    return 0;
    }
