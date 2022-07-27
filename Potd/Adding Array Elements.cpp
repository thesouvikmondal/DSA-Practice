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
    int minOperations(int arr[], int n, int k) {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i < n; i++) pq.push(arr[i]);
        
        if (pq.size() < 2) return -1;
        
        int cnt = 0, sum = 0;
        
        while(!pq.empty() and pq.top() < k)
        {
            int n1 = pq.top(); pq.pop();
            int n2 = pq.top(); pq.pop();
            int sum = n1 + n2;
            cnt++;
            pq.push(sum);
        }
        
        return cnt;

    }
};