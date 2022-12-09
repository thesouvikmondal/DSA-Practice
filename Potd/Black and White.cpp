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
int check(int i, int j , int n, int m){
    if(i >= 0 && j >= 0 && i < n && j < m){
        return 1;
    }
    return 0;
}

long long numOfWays(int N, int M)
{
    long long mod = 1e9 + 7;
    long long ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int val = check(i + 2, j -1, N, M) + check(i - 2, j - 1, N, M) + check(i - 2, j + 1, N, M) + check(i + 2, j + 1, N, M) + check(i + 1, j - 2, N, M) + check(i + 1, j + 2, N, M) + check(i - 1, j + 2, N, M) + check(i - 1, j - 2, N, M);
            ans += N*M - 1 - val;
            ans %= mod;
        }
    }
    return ans;
}
};