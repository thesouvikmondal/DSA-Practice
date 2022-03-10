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
class Solution {
 public:
    string sevenSegments(string S, int n) {
        
        string ans = "";
        int sum=0, num = 0;
        int pairs[10] = {6,2,5,5,4,5,6,3,7,5};
        
        for(int i=0; i<n; i++)
        {
            sum += pairs[S[i] - '0'];
        }
        
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<10; j++)
            {
                if(sum - pairs[j] >= 2*i && sum - pairs[j]<=7*i)
                {
                    sum -= pairs[j];
                    ans += (j + '0');
                    break;
                }
            }
        }
        
        return ans;
        
    }
};