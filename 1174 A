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
     
        int y,x;
        cin>>y;
        y=y*2;
        vector<int> v;
        for(int i=0; i<y; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int sum1=0,sum2=0;
        for(int i=0; i<y/2; i++) sum1+=v[i];
        for(int i=y/2; i<y; i++) sum2+=v[i];
        if(sum1==sum2)
            cout<<-1<<endl;
        else
        {
            for(int i=0; i<y; i++)
                cout<<v[i]<<" ";
        }
     
        End;
    }
