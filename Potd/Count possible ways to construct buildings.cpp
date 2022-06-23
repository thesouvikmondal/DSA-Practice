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
class Solution {
    	public:
	int TotalWays(int N)
	{
	    if(N == 0){
	        return 0;
	    }
	    if(N == 1){
	        return 4;
	    }
	    if(N == 2){
	        return 9;
	    }
	    uint64_t prev = 3;
	    uint64_t prev_prev = 2;
	    uint64_t ans = 0;
	    uint64_t mod = 1e9 + 7;
	    for(int i = 3; i <= N; i++){
	        ans = (prev + prev_prev)%mod;
	        prev_prev = prev;
	        prev = ans;
	    }
	    return ((ans % mod) * (ans % mod))%mod;
	}
};