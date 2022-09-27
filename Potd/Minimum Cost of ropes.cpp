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
long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long ans = 0;
        for(int i= 0 ; i < n ; i++)
            pq.push(arr[i]);
        
        while(pq.size() > 1){
            long long a = pq.top();
            pq.pop();
            a += pq.top();
            pq.pop();
            ans += a;
            pq.push(a);
        }
        return ans;
    }
};