#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution {
    public:

	void rearrange(int arr[], int n) {
	    // code here
	    if(n==1 or n==0){
	        return;
	    }
	    vector<int> pos,neg;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0)
	            pos.push_back(arr[i]);
	       else
	            neg.push_back(arr[i]);
	    }
	    
	    int i=0 , j=0 , k=0;
	    
	    while(i<pos.size() and j<neg.size()){
	        arr[k] = pos[i];
	        k++; i++;
	        arr[k] = neg[j];
	        k++; j++;
	    }
	    
	    while(i<pos.size()){
	        arr[k] = pos[i];
	        k++; i++;
	    }
	    
	    while(j<neg.size()){
	        arr[k] = neg[j];
	        k++; j++;
	    }
	    
	//end of function
	}
};