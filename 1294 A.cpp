    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int x[3],n;
            cin>>x[0]>>x[1]>>x[2]>>n;
            sort(x,x+3);
            int a,b,c;
            a=x[2],b=x[1],c=x[0];
            //cout<<a<<" "<<b<<" "<<c<<endl;
            int need=(a-b)+(a-c);
            if(need>n) cout<<"NO"<<endl;
            else{
                n=n-need;
                if(n%3==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
     
        return 0;
    }
     
