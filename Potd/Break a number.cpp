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
int waysToBreakNumber(int N){
        // code here
        long long int mod = 1000000007;
        long long int n =N;
        return (3*n+((n-1)*(n-2))/2)%mod;
    }
};