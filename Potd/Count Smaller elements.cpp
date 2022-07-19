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
	vector<int> constructLowerArray(int *arr, int n) {
	    vector<int> ans(n);
	    vector<int> v; // will always be maintained in ascending order
	    for(int i=n-1;i>=0;i--) {
	        int pos = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
	        ans[i]=pos;
	        v.insert(v.begin()+pos, arr[i]);
	    }
	    return ans;
	}
};