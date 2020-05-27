#include <bits/stdc++.h>
using namespace std;

long long int a,b;
int main()
{
    int n,j;
    cin>>n;
    bool neg=false, pos=false;
    vector<int> x;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        if(j<0 && neg==false)
        {
            x.push_back(j);
            neg =true;
        }
        else if(j>0 && pos ==false)
        {
            x.push_back(j);
            pos=true;
        }
        else v.push_back(j);
    }

    sort(v.begin(),v.end());
    sort(x.begin(),x.end());

    cout<<1<<" "<<x[0]<<endl;

    if(pos==true) cout<<1<<" "<<x[1]<<endl;
    else cout<<2<<" "<<v[0]<<" "<<v[1]<<endl;

    if(!pos)
    {
        cout<<v.size()-2<<" ";
        for(int i=2;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    else
    {
        cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;
}
