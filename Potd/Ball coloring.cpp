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
    unsigned long long int noOfWays(unsigned long long int n){
       
       return 2*n + (n-1)*(n-2);
   }
};