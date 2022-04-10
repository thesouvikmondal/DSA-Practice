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
    int minOperations(int *a,int n)
    {
        priority_queue<int,vector<int>,greater<int>>p;
        int ans=0;
        for(int i=0;i<n;i++){
           if(p.size()>0&&p.top()<a[i]){
                ans+=a[i]-p.top();
                p.push(a[i]);
                p.pop();
            }
            p.push(a[i]);
        }
        return ans;
    }
};