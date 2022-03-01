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
class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        std::unordered_map<long long, int> mp;
        for(auto num : numbers) mp[num]++;
        int res = 0;
        for(int i = 0;i<N;i++){
            int n = numbers[i]>9?log10(numbers[i])+1:1;
            int div = pow(10,n);
            if(X%div == numbers[i] && mp.count(X/div)){
                if(X/div!=numbers[i]) res+=mp[X/div];
                else res += mp[X/div]-1;
            }
        }
        return res;
    }
}; 