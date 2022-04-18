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
    long long int pow(long long int a, long long int b, long long int p) {
    	long long int ans = 1;
    	a %= p;
    	while(b) {
    		if(b&1)	ans = (ans*a)%p;
    		b = b>>1;
    		a = (a*a)%p;
    	}
    	return ans;
    }
    
    long long karyTree(int k, int m) {
        return pow(k, m, 1e9+7);
    }
};