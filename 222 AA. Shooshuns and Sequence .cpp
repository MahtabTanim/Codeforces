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

string s;

long long t,a,b,c,d,tcase=0,n,m,k,i,j;

int main()
{
        cin>>n>>k;
        k--;
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];
        int key=A[k],i;
        for(i=n-1;i>=0;i--)
        {
            if(A[i]!=key) break;
        }
        if(i>k) cout<<-1<<endl;
        else cout<<i+1<<endl;
    return 0;
}
