#include<bits/stdc++.h>
using namespace std;
bool search(int A[],int n,int q)
{
    int mid,lo=0,hi=n-1;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(A[mid]==q) return true;
        else if(A[mid]>q) hi=mid-1;
        else lo=mid+1;
    }
    return false;
}
int main()
{
    int t,tcase=0;
    scanf("%d",&t);
    while(t--)
    {	int n,s,k,j,ans; cin>>n>>s>>k;
        int A[k];
        for(int i=0;i<k;i++) cin>> A[i];
        sort(A,A+k);
        int upper,down;
        int i;
        for( i=s;i<=n;i++)
        {
            if(search(A,k,i)==false) break;
        }
        upper=i;
        if(upper==n+1) upper=-1;
        for(i=s;i>=1;i--)
        {
            if(search(A,k,i)==false) break;
        }
        down=i;
        if(down==0) down=-1;
        if(down==-1) ans=fabs(s-upper);
        else if(upper==-1) ans= fabs(s-down);
        else ans=min(fabs(s-upper),fabs(s-down));
        cout<<ans<<endl;
    }
    return 0;
}
