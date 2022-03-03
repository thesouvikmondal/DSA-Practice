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
class Solution{
   public:
       std::pair<int,int> endPoints(vector<vector<int>> matrix)
   {
       std::pair<int, int> ans; 
       int n = matrix.size(); 
       int m = matrix[0].size(); 
       
       int i = 0, j = 0; 
       char dir = 'R'; 
       do
       {
           if(matrix[i][j] == 1)
           {
               matrix[i][j] = 0; 
               if(dir == 'U')  dir = 'R'; 
              else if(dir == 'R') dir = 'D'; 
               else if(dir == 'D') dir = 'L'; 
               else if(dir == 'L') dir = 'U';
           }
           if(dir == 'R')          j = j+1; 
           else if(dir == 'L')  j = j -1; 
           else if( dir == 'U')  i = i - 1; 
           else if( dir == 'D')  i = i + 1; 
 
       }
       while( i >= 0 &&  j>=0 && i<= n-1 && j<= m-1); 
       
       if(dir == 'R')
       j  =j -1; 
       else if(dir == 'L')
       j = j+1; 
       else if( dir == 'D') 
       i = i-1;
       else if( dir == 'U')
       i = i+1;
       
       ans = {i, j}; 
       return ans; 
   }

};