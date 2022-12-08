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
vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<int> ans; 
        auto isPrime = [&] (long long num){
            for(int i=2; i*i<=num; i++)if(num%i == 0)return false;
            return true;  
        };
        for(auto num:query)
        {
            int cnt = 0;
            for(int i=2; i*i<=num; i++)
                if(isPrime(i))cnt++;
            ans.push_back(cnt);
        }
        return ans;
    }
};