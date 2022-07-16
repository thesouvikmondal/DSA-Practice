#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int prd=1,sum=0;
        while(n!=0){
            int rem=n%10;
            prd*=rem;
            sum+=rem;
            n/=10;
        }
        return prd-sum;
        }
};