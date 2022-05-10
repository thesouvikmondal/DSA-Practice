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
class Node{
public:

    int val;
    Node *left;
    Node *right;
    
    Node(int x){
        this->val = x;
    }
    
};    
class Solution{
public:
    void bst(int s , int e , vector<int> &ans , vector<int> nums){
        if(s>e){
            return;
            
        }
        int mid = (s+e)/2;
        ans.push_back(nums[mid]);
        bst(s , mid-1, ans, nums);
        bst(mid+1, e,ans, nums);
        return;
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        vector<int>ans;
       int s = 0;
       int e = nums.size()-1;
       bst(s , e,ans,  nums);
       return ans;
       
    }
};