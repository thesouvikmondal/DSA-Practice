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
int findSum(int A[], int N)
    {
        int mx=*max_element(A,A+N);
        int mn=*min_element(A,A+N);
        
        return (mx+mn);
    }
};