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
    int main()
    {
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	if(n%2==1)
    	{
    		n=n+1;
    		n=n/2;
    		cout<<n-1<<endl;
    	}
    	else{
    		n=n/2;
    		cout<<n-1<<endl;
    		
    	}
    }
    End;
    }
