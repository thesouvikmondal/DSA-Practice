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
long long int maxSumLCM(int n) 
    {
        long long ans = 0;
        for(int i = 1; i*i <= n; i++){
            if(n % i == 0){
                ans += i;
                if(i*i != n){
                    ans += n/i;
                }
            }
        }
        return ans;
    }
};