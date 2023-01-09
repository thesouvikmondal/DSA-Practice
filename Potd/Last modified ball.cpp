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
int solve(int N, vector<int> A) {
        // code here
        
        for(int i=N-1;i>=0;i--){
            if(A[i]<9)
               return i+1;
        }
        
        return 0;
    }
};