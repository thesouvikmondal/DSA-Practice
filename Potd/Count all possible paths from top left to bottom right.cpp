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
long long int numberOfPaths(int m, int n){
        long mod = 1e9 + 7;
        long long dp[100][100];

        for(int i = 0; i < n; i++) // fill first row
            dp[0][i] = 1;
            
        for(int i = 1; i < m; i++) // fill first column
            dp[i][0] = 1; 
        
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                dp[i][j] = (dp[i][j-1] % mod + dp[i-1][j] % mod) % mod; // add top and left cell
            }
        }
        return dp[m-1][n-1];
}
};