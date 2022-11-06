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
 vector<int> minPartition(int N)
    {
        // code here
        vector<int>arr={2000,500,200,100,50,20,10,5,2,1};
        int i=0;
        vector<int>ans;
        while(N>0){
            if(arr[i]<=N){
                ans.push_back(arr[i]);
                N-=arr[i];
            }
            else{
                i++;
            }
        }
        return ans;
    }
};