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
vector <int> max_of_subarrays(int *arr, int n, int k)

    {

        vector<int> ans;

        priority_queue<pair<int,int>> pq;

        int i=0;

        for(;i<k;i++){

            pq.push({arr[i],i});

        }

        ans.push_back(pq.top().first);

        while(i<n){

            pq.push({arr[i],i});

             while(!pq.empty() && pq.top().second<=i-k){

                 pq.pop();

             }

             ans.push_back(pq.top().first);

             i++;

        }

        return ans;
    }
};