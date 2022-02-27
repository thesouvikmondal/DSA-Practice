#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using std::min;
class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        int count = 0;
        int freq[3] = {0};
        int j = 0, i = 0, ans = INT_MAX;
        while(j < s.length()) {
            if(freq[s[j] - '0'] == 0) count += 1;
            freq[s[j] - '0']++;
            if(count == 3) {
                ans = min(ans, j - i + 1);
                while(i < s.length() && count == 3) {
                    freq[s[i] - '0']--;
                    if(freq[s[i] - '0'] == 0) {
                        count -= 1;
                        i++;
                    }
                    else {
                        i++;
                        ans = min(ans, j - i + 1);
                    }
                }
                j++;
            }
            else j++;
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};