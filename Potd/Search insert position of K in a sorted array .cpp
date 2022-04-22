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
    int searchInsertK(vector<int>arr, int n, int k)
    {
        // code here
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==k) return mid;
            else if(arr[mid]>k) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};