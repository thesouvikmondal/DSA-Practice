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
     vector<int> fact;
    void process()
    {
        fact.push_back(1);
        for (int i = 1; i < 10; i++)
            fact.push_back(fact.back() * i);
    }
    vector<int> FactDigit(int N)
    {
        process();
        vector<int> ans;
        for (int i = 9; N && i >= 1; i--)
        {
            while (N >= fact[i])
            {
                ans.push_back(i);
                N -= fact[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};