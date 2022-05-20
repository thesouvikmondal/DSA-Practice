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
class Solution{
     public:
    int findTime(string s1, string s2) {
       int ans = 0, k = 0;
        for (int i = 0; i < s2.length(); i++)
        {
            for (int j = 0; j < s1.length(); j++)
            {
                if (s2[i] == s1[j])
                {
                    ans += abs(k - j);
                    k=j;
                }
            }
        }

        return ans;
    }
};