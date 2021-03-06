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
long long int N = 0;

bool comp(long long int a, long long int b) {
    return abs(N-a) < abs(N-b);
}

class Solution {
public:
    long long int mkPal(long long int num) {
        string s = to_string(num);
        int n = s.length();
        
        for(int i=0; i<n/2; i++)
            s[n-i-1] = s[i];
        
        stringstream ss(s); ss>>num;
        return num;
    }
    
	long long int closestPalindrome(long long int num){
	    long long int d = (to_string(num)).length();
	    if(d == 1) return num;
	    
	    N = num;
	    long long int ans[4] = {0};
	    ans[0] = mkPal(num-pow(10ll, (d-1)/2));
	    ans[1] = mkPal(num-pow(10ll, d/2));
	    ans[2] = mkPal(num);
	    ans[3] = mkPal(num+pow(10ll, d/2));
	    
	    sort(ans, ans+5, comp);
	    
	    return ans[0];
	}

};