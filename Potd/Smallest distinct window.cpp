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
    int findSubString(string str)
    {
        // Your code goes here 
        unordered_map<char, int> mp;
        for (auto i : str)
            mp[i]++;

        unordered_map<char, int> mp1;
        int j = 0, i = 0;
        int ans = INT_MAX;
        while (i < str.size())
        {
            mp1[str[i]]++;
            if (mp1.size() == mp.size())
            {
                ans = min(ans, i - j + 1);
                while (mp1.size() == mp.size() && j < i)
                {
                    mp1[str[j]]--;
                    if (mp1[str[j]] == 0)
                        mp1.erase(str[j]);
                    j++;
                    ans = min(ans, i - j + 2);
                }
            }
            i++;
        }
        ans = min(ans, i - j + 1);
        return ans;
    }
};