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
 int removals(vector<int>& arr, int k){
        //Code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i = 0, j = 0, res = n;
        while (j < n) {
            while (arr[j] - arr[i] > k)
                i++;
            res = min(res, i + n - j - 1);
            j++;
        }
        return res;
    }
};