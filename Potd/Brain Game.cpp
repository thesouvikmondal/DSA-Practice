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
    bool isPrime(int n)
    {
        if(n <= 1)
            return false;
            
        if(n <= 3)
            return true;
            
        if(n%2 == 0 || n%3 == 0)
            return false;
            
        for(int i = 5; i <= n; i += 6)
        {
            if(n%i == 0 || n%(i+2) == 0)
                return false;
        }
        
        return true;
    }
    
    int primeFactors(int n)
    {
        int ans = 0;
        while(n%2 == 0)
        {
            ans++;
            n /= 2;
        }
        
        while(n%3 == 0)
        {
            ans++;
            n /= 3;
        }
        
        for(int i=5; i<=sqrt(n); i += 6)
        {
            while(n%i == 0)
            {
                ans++;
                n /= i;
            }
            
            while(n%(i+2) == 0)
            {
                ans++;
                n /= (i+2);
            }
        }
        
        if(n > 3)
            ans++;
            
        return ans;
        
    }
	public:
    bool brainGame(vector<int>nums) {
        vector<int> v(1001, 0);
        for(int i=2; i<1001; i++)
        {
            if(!isPrime(i))
            {
                v[i] = primeFactors(i) - 1;
            }
        }
        
        int x = 0;
    	for(int i = 0; i < nums.size(); i++)
    	{
    		x = x ^ v[nums[i]];
    	}
    	
    	if(x == 0)
    		return false;
    		
    	return true;
    }
};