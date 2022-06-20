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
    long posIntSol(string s)
    {
        int n = s.size();
        int N = 0, K = 0;
        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (s[j] >= 'a' && s[j] <= 'z')
                j++;
            N++;
            if (s[j] == '=')
            {
                K = stoi(s.substr(j + 1, n - 1 - j));
                break;
            }
            i = j;
        }

        if (K < N)
            return 0;

        long ans = 1;
        for (int i = 1; i <= N - 1; i++)
            ans *= (K - i);
        for (int i = 1; i <= N - 1; i++)
            ans /= (N - i);
        return ans;
    }
};
