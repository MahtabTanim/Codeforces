    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t; cin>>t;
    	while(t--)
    	{
    		int n,k,j;
    		cin>>n>>k;
    		long long sum=0;
    		vector<int> a;
    		vector<int> b;
    		for(int i=0;i<n;i++) { cin>>j; a.push_back(j);}
    		for(int i=0;i<n;i++) { cin>>j; b.push_back(j);}
    		sort(a.begin(),a.end());
    		sort(b.begin(),b.end());
    		reverse(b.begin(),b.end());
    		for(int i=0;i<k;i++){
    			if(a[i]<b[i])swap(a[i],b[i]);
    		}
    		for(int i=0;i<n;i++) sum+=a[i];
    		cout<<sum<<endl;
    	}
    return 0;
    }
