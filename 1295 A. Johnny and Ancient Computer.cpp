#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
fstream ff;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n<m) swap(n,m);
        int count =0;
        while(m<n)
        {
            count++;
            m=m*2;

        }
        if(n==m)
        {
            int steps=count/3;
            count=count%3;
            if(count==2) steps+=1;
            else steps += count;
            cout<<steps<<endl;
        }
        else cout<<-1<<endl;
    }

    return 0;
}
