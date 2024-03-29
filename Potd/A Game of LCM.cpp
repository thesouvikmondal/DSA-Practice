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
using ll = long long;
class Solution {
private :
    ll getMaxLCM(ll N) {
        ll ans = N*(N-1);
        ll rem = 2;
        N-=2;
        while(N>1 && rem > 0) {
            if(__gcd(ans,(ll)N) == 1) ans *= N, --rem;
            --N;
        }
        return ans;
    }
  public:
    long long maxGcd(int N) {
       return max(getMaxLCM(N), getMaxLCM(N-1)) ;
    }
};