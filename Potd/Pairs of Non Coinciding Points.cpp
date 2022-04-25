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
    int numOfPairs(int x[], int y[], int n) {
        // code here
        int ans = 0;
        unordered_map<int,int> xFreq, yFreq;
        unordered_map<string,int> xyFreq;
    
        for(int i = 0; i < n; i++) {
            string s = to_string(x[i]) + "," + to_string(y[i]);
            ans += xFreq[x[i]] + yFreq[y[i]] - 2*xyFreq[s];
    
            xFreq[x[i]]++;
            yFreq[y[i]]++;
            xyFreq[s]++;
        }
    
       return ans;
    }
};