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
    //Function to find all possible unique subsets.
    void solve(vector<int> &arr, int n, int idx, vector<int> &temp_ans, set<vector<int>> &ans)
    {
        if(idx==n){
            ans.insert(temp_ans);
            return;
        }
        temp_ans.push_back(arr[idx]);
        solve(arr, n, idx+1, temp_ans, ans);
        temp_ans.pop_back();
        solve(arr, n, idx+1, temp_ans, ans);
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n)
    {
         sort(arr.begin(),arr.end());
        vector<int> temp_ans;
        set<vector<int>> s;
        solve(arr,n,0,temp_ans,s);
        vector<vector<int>> ans;
        for(auto x: s){
            ans.push_back(x);
            
        }
        return ans;
    }
};
