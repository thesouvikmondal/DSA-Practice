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
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<=j){
            ans=max(ans,((j-i)*min(h[i],h[j])));
            
            if(h[i]<h[j]){
                i++;
            }
            else{
                j--;
            }   
        }
        return ans;
    }
};