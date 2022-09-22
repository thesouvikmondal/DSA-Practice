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
vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        deque<int>dq;
        vector<int>ans;
        for(int i=0;i<n;i++){
            while(!dq.empty() && dq.back()<arr[i])
                dq.pop_back();
            
            dq.push_back(arr[i]);
        
            if(i>=k-1){ 
                ans.push_back(dq.front());
            
                if(dq.front()==arr[i-k+1])
                    dq.pop_front();
            }
        }
        return ans ;
    }
};