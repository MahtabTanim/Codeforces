    #include <bits/stdc++.h>
    using namespace std;
    bool f(int n)
    {
    	int t1=-1,t2=1;
    	bool x=true;
    	vector<int> status;
    	while(n>0)
    	{
    		t1=n%10;
    		status.push_back(t1);
    		n=n/10;
    	}
    	int len=status.size();
    	for(int i=0;i<len-1;i++)
    	{
    		for(int j=i+1;j<len;j++)
    		{
    			if(status[i]==status[j]) {
    				x=false; break;
    			}
    		}
    	}
    	return x;
    }
    int main()
    {
    	int n; 
    	cin>>n;
    	bool status=true;
    	while(status)
    	{
    		n++;
    		if(f(n)) break;	
    	}
    	cout<<n<<endl;
    return 0;
    }
