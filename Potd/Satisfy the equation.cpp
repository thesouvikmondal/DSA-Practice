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
 vector<int> smaller(vector<int> &a, vector<int> b) {
        int i = 0;
        int j = 0;
        while(i < 4 && a[i] == b[j])
            i = ++j;
        if (i == 4 || a[i] < b[j])
            return a;
        return b;
    }
  public:
    vector<int> satisfyEqn(int A[], int N) {
        // code here
        unordered_map<int, pair<int, int>> dp;
        vector<int> res;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                int s = A[i] + A[j];
                auto temp = dp.find(s);
                if (temp != dp.end()) {
                    if (dp[s].first != i && dp[s].first != j && dp[s].second != i && dp[s].second != j) {
                        if (res.empty())
                            res = {dp[s].first, dp[s].second, i, j};
                        else
                            res = smaller(res, vector<int>{dp[s].first, dp[s].second, i, j});
                    }
                }
                else
                    dp[s] = make_pair(i, j);
            }
        }
        if (res.empty())
            return {-1, -1, -1, -1};
        return res;
    }
};