#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class Solution{
     public:
    int sum(int a , int b)
    {
        int xxor = a ^ b;
        int carry = a & b;
        while(carry!=0){
            a = xxor;
            b = (carry<<1);
            xxor = a ^ b;
            carry = a & b;
        }
        return xxor;
    }
};