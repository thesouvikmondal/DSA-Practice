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
class Solution{
    public:
    void func(int idx, vector<vector<int> >& ans, vector<int>tmp, vector<int>& A){
        if(idx == A.size()){
            ans.push_back(tmp);
            return;
        }
        //pick
        tmp.push_back(A[idx]);
        func(idx+1, ans, tmp, A);
        //not pick
        tmp.pop_back();
        func(idx+1, ans, tmp, A);
    }
    vector<vector<int> > subsets(vector<int>& A)
    {
        vector<vector<int> > ans;
        vector<int>tmp;
        func(0, ans, tmp, A);
        sort(begin(ans), end(ans));
        return ans;
        //code here
    }
    
};