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
class Solution{
    public:
    void helper(int n, int p0, int p2, vector<vector<int>>& ans){
        if(n == 0) return ;
        int p1 = 6 - p0 - p2;
        helper(n - 1, p0, p1, ans);
        ans.push_back({p0, p2});
        helper(n - 1, p1, p2, ans);
    }

    vector<int> shiftPile(int N, int n){
        // code here
        vector<vector<int>> ans;
        helper(N, 1, 3, ans);
        return ans[n - 1];
    }
};