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
   int minimumSum(int num) {
        vector<int> a;
        for(int i=0; i<=3; i++){
            a.push_back(num%10);
            num = num/10;
        }
        sort(a.begin(), a.end()); 
        return a[2] + a[3] + (10*a[0]) + (10*a[1]);;
    }
};