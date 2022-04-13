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
using namespace std;
class Solution {
    	public:
	int MinCoin(vector<int>nums, int amount)
{
    // Code here
    vector<int>dp(amount+1, INT_MAX);
    dp[0] = 0;
    
    for(int i=1; i<amount+1; i++){
        int temp = INT_MAX;
        for(int j = 0; j<nums.size(); j++){
            if(i-nums[j]>=0){
                temp = min(temp, dp[i-nums[j]]);
            }
        }
        if(temp==INT_MAX){
            dp[i] = temp;
        }else{
            dp[i] = temp+1;
        }
       // cout<<dp[i]<<" "<<i<<endl;
    }
    return dp[amount]==INT_MAX?-1:dp[amount];
}

};