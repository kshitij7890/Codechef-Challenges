#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std; 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		int sum1=0,sum2=0;
		unordered_set<int>s;
	

	for (int i=0; i<n; i++) 
    { 
        if (s.find(arr[i]) == s.end() && arr[i]>0) 
        { 
            sum1 += arr[i];  
        } 
        if (s.find(arr[i]) == s.end() && arr[i]<0) 
        { 
            sum2 += arr[i];  
        }
    }
	 
    }
	
	
	return 0;
}



    
