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
int totalWays(int n, vector<int>capacity) {

        sort(capacity.begin(),capacity.end());

        int modul=1000000007;

        long long ans=1;

        for(int i=0;i<n;i++)

        ans=(ans*(capacity[i]-i)%modul)%modul;

        return ans;

    }

};