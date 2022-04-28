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
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector<int> ans;
        
        sort(candies, candies+N);
        
        int m=N, maxi=0, mini=0;
        for(int i=0;i<m;i++)
        {
            mini=mini+candies[i];
            m=m-K;
        }
        
        ans.push_back(mini);
        int l=0;
        for(int i=N-1;i>=l;i--)
        {
            maxi=maxi+candies[i];
            l=l+K;
        }
        ans.push_back(maxi);
        return ans;
    }
};