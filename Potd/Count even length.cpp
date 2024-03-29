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
long long int MOD = 1e9 + 7; 

long long binpow(long long a, long long b) {

    a %= MOD;

    long long res = 1;

    while (b > 0) {

        if (b & 1)

            res = res * a % MOD;

        a = a * a % MOD;

        b >>= 1;

    }

    return res;

    }

 

    long long int mul(long long int x,long long int y)

    {

        return (x * 1ll * y) % MOD;

    }

 

 long long int modInv(long long int a) {

 return binpow(a,MOD-2) % MOD ;

    }

    

    long long int divide(long long int x,long long int y)

    {                    

        return mul(x,binpow(y, MOD - 2)); 

    } 

 

 int compute_value(int n)

 {

     // Code here

     long long int fact1 = 1;

     

     for(long long int i=1;i<=1ll*2*n;++i)

     {

         fact1 = (fact1*i)%MOD;

     }

     

    long long int fact2 = 1;

    

    for(long long int i=1;i<=n;++i)

    {

        fact2 = (fact2*i)%MOD;

    }

    

    long long res1 = divide(fact1,fact2);

    

    res1 = divide(res1,fact2);

    

    return res1;

    

 }
};