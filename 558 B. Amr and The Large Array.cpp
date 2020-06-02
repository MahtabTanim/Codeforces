    #include <bits/stdc++.h>
    #include<iterator>
    #include<algorithm>
    #include<map>
    #include<list>
    #include<math.h>
    #include<fstream>
    #define pb push_back
    using namespace std;
    #define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    fstream ff;
    int F[1000001];
    int L[1000001];
    bool FF[1000001]={false};
    string s;
     
    long long extra,sum=0,t,a,b,c,d,tcase=0,n,m,k,i,j;
     
    int main()
    {
        map<int,int> ma;
        map<int,int> :: iterator it;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>j;
            if(FF[j]==false) F[j]=i, FF[j]=true;
            L[j]=i;
            ma[j]++;
        }
        int max_c=0,key;
        for(it=ma.begin();it!=ma.end();it++)
        {
            if((it-> second)> max_c)
            {
                max_c=it->second;
            }
        }
        vector<int> keys;
        for(it=ma.begin();it!=ma.end();it++)
        {
            if((it-> second)== max_c)
            {
                keys.push_back(it->first);
            }
        }
        int ra,rb,minr=n*2;
        for(int i=0;i<keys.size();i++)
        {
            if(keys.size()==n) {
                cout<<1<<" "<<1<<endl;
                return 0;
            }
            int l,r;
            l=F[keys[i]];
            r=L[keys[i]];
            if(fabs(l-r)<minr)
            {
                ra=l;
                rb=r;
                minr=fabs(l-r);
            }
        }
        cout<<ra+1<<" "<<rb+1<<endl;
     
        return 0;
    }
