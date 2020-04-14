    // Written By Mahtab Tanim
    #include<bits/stdc++.h>
    using namespace std;
    #define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define nl "\n"
    #define End return 0
    #define ll long long int
    #define mp make_pair
    #define pb push_back
    #define ull unsigned long long int
    #define pi acos(-1)
    #define forn(i,a,b) for (int i=a;i<=b;i++)
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n,i,j;
    		cin>>n;
    		vector<int>num;
    		vector<int >::iterator it;
    		for(i=0;i<n;i++)
    		{
    			cin>>j;
    			num.push_back(j);
    		}
    		int dif=0;
    		int temp;
    		bool res=false;
    		for(i=0;i<n-2;i++)
    		{
    			temp =num[i];
    			for(int j=n-1;j>=i+1;j--)
    			{
    				if(num[j]==temp)
    				{
    					dif=j-i;
    					if(dif>=2)
    					{
    						res=true;
						}
					}
				}
    		}
    		if(res) cout<<"YES"<<endl;
    		else cout<<"NO"<<endl;

    	}
     
    End;
    }
