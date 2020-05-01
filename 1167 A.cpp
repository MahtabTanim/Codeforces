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
    int t,n; cin>>t;
    string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int f=0;
        bool v=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='8'){
                break;
            }
            else{ f++;}
        }
        if((n-f)>=11) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    End;
    }
