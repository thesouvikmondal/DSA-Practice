#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::max;
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> maxProductSubsequence(int *arr , int n) 
    { 
        // Complete the function
        vector<int>res={-1,-1,-1};
        //vector<int>store(n,1);
        long long mp=1;
        vector<int>x(n,1);
        for(int i=n-2;i>=0;i--)
        x[i]=max(x[i+1],arr[i+1]);
        set<int>st;
        
        for(int i=0;i<n;i++)
        {
            vector<long long >c;
            c.push_back(arr[i]);
            st.insert(arr[i]);
            if((*st.begin())<arr[i])
            {
                auto it=st.lower_bound(arr[i]);
                it--;
                c.push_back(*it);
            }
            if(x[i]>arr[i]) c.push_back(x[i]);
            if(c.size()==3 && (c[0]*c[1]*c[2])>mp)
            {
                //res={c[1],c[0],c[2]}; giving error in vs code bt compiled in gfg
                mp=(c[0]*c[1]*c[2]);
            }
        }
        return res;
    } 

};

int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    
	    int num;
	    cin>>num;
	    int arr[num];
	    for(int i = 0; i<num; ++i)
	        cin>>arr[i];
	    
	    vector<int> res;
	    Solution obj;
	    res = obj.maxProductSubsequence(arr, num);
	    
	    if(res[0] == -1)
	        cout<<"Not Present\n";
	    else{
    	    for(int i = 0; i<3; ++i)
    	        cout<<res[i]<<" ";
    	    cout<<"\n";
	    }
	    
	}
}