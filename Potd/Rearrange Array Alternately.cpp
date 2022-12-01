#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <set>
using std::vector;
using std::max;
using namespace std;
class Solution {
public:

void rearrange(long long *arr, int n) 
    { 
    	// Your code here
    	vector<long long>v;
    	for(int i=0;i<n;i++){
    	    v.push_back(*(arr+i));
    	}
    	int l=0,h=n-1;
    	for(int i=0;i<n;i+=2){
    	    *(arr+i)=v[h];
    	    *(arr+i+1)=v[l];
    	    l++;h--;
    	}
    }
};