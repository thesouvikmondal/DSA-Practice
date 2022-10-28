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
	int NthTerm(int n){
    int i =1;
    long long ans = 1;
    while(n--)
    {
        ans=(ans*i)+1;
        i++;
        
        ans = ans%1000000007;
    }
    return ans%1000000007;
}

};