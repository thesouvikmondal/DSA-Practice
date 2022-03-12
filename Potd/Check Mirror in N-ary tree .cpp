#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution {
public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        
        map<int,stack<int>>mp;
        
        for(int i=0;i<2*e;i+=2)
        {
            mp[A[i]].push(A[i+1]);
        }
        
        for(int i=0;i<2*e;i+=2)
        {
            if(mp[B[i]].size() and mp[B[i]].top() != B[i+1])
            {
                return 0;
            }
            mp[B[i]].pop();
        }
        
        return 1;
    }
};
