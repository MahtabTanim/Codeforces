    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n,j,h; cin>>n;
    	vector<int> v[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>j>>h; 
    		v[i].push_back(j);
    		v[i].push_back(h);
    	}
    	int x,y,xx,yy;
    	int left=0,right=0,lower=0,upper=0;
    	/*
        point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
        point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
        point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
        point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y 
    	*/
    	int count=0;
    	for(int i=0;i<n;i++)
    	{
    		left=0,right=0,lower=0,upper=0;
    		x=v[i][0];
    		y=v[i][1];
    		for(int j=0;j<n;j++)
    		{
    			xx=v[j][0],yy=v[j][1];
    			if(xx>x && yy==y) right++;
    			if(xx<x && yy==y) left++;
    			if(xx==x && yy<y ) lower++;
    			if(xx==x && yy>y) upper++; 
    		}
    		if(right && left && lower && upper) count++;
    	}
    	cout<<count<<endl;
    	return 0;
    }
