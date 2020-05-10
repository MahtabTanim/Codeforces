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
    bool score[1000000];
    void sieve(void)
    {
        int n=1000000;
        int sq=sqrt(n);
        for(int i=4;i<=n;i+=2) score[i]=1;
        for(int i=3;i<=sq;i+=2)
        {
            if(score[i]==0)
            {
                for(int j=2*i;j<=n;j+=i) score[j]=1;
            }
        }
        score[1]=1;
    }
    int main()
    {
    sieve();
    int n,k,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        long double f=sqrt(k);
        j=sqrt(k);
        if(f==j){
            if(score[j]) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    End;
    }
