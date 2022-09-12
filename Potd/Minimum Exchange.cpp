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
int MinimumExchange(vector<vector<char>>matrix){
    // Code here
    int count1=0;
    int count2=0;
    int row = matrix.size();
    int col = matrix[0].size();
    
    //For ABABA Pattern
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(((i+j)%2==0 && matrix[i][j]=='B')||((i+j)%2!=0 && matrix[i][j]=='A'))
            count1++;
        }
    }
    
    //For BABAB Pattern 
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(((i+j)%2!=0 && matrix[i][j]=='B')||((i+j)%2==0 && matrix[i][j]=='A'))
            count2++;
        }
    }
    int ans;
    if(count1%2==0 && count2%2==0)
    {
        ans= min(count1,count2);
        return ans/2;
    }
    else if(count1%2!=0 && count2%2!=0)
    {
        ans= min(count1,count2);
        return ans;
    }
    else
    {
        if(count1%2==0 && count2%2!=0)
        return count1/2;
        
    }
    return count2/2;   
  }
};