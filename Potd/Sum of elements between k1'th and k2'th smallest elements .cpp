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
    long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2){
    partial_sort(a,a+k2-1,a+n) ;
    long long ans = 0 ;
    for(int i=k1 ; i<k2-1 ; i++)
        ans += a[i] ;
    return ans ;
}
};