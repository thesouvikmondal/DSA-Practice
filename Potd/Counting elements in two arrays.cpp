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
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        unordered_map<int,int> mp;
        sort(arr2,arr2+n);
        vector<int> res(m);
        for(int i=0;i<m;i++){
            int index = upper_bound(arr2,arr2+n,arr1[i])-arr2;
            res[i] = index;
        }
        return res;
    }
};