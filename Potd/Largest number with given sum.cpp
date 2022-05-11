#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::min;
class Solution {
     public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)    {
        string num;
        while (n--)   {
            num += min(sum, 9) + '0';
            sum -= min(sum, 9);
        }
        
        if (sum) return "-1";
        
        return num;
    }
};