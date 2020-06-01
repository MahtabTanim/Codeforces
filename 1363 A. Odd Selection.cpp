    #include <bits/stdc++.h>
    using namespace std;
    #define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
     
    long long  t,n,m,a,x,q,b,l,r,tcase=0;
    string s;
    int main()
    {
        cin>>t;
        while(t--)
        {
            cin>>n>>x;
            int odd=0,even=0,sum=0;
            for(int i=0;i<n;i++)
            {
                cin>>a;
                if(a%2) odd++;
                else even ++;
                sum+=a;
            }
            if(x==n)
            {
                if(sum%2) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else if(x%2)
            {
                if(odd) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
            else
            {
                if(even && odd) cout<<"Yes"<<endl;
                else cout<<"No"<<endl;
            }
        }
        return 0;
    }
