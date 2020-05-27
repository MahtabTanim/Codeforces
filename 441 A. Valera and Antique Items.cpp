#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v,m,j;
    cin>>n>>v;
    set<int> res;
    set<int> :: iterator it;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        while(m--)
        {
            cin>>j;
            if(j<v) res.insert(i);
        }
    }
    cout<<res.size()<<endl;
    for(it=res.begin();it!=res.end();it++) cout<<*it<<" ";
    cout<<endl;
    return 0;
}
