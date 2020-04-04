#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,d;
    cin>>a;
    if(a%4==0 || a%7==0)
    {
        int d;
        if(a%7==0)
        {
            d=a/7;
            for(i=1;i<=d;i++)
            {
                cout<<7;
            }
        }
        else {
            d=a/4;
            for(i=1;i<=d;i++)
            {
                cout<<4;
            }
        }
    }
    else{

    }
    return 0;
}
