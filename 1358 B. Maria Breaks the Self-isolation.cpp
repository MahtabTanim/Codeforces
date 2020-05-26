#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++) cin>>A[i];

        sort(A,A+n);
        int count=1;
        int res,i;
        for(i=n-1;i>=0;i--)
        {
            if(i+count>=A[i]) break;
        }
        res=i+2;
       cout<< res<<endl;
    }
    return 0;
}
