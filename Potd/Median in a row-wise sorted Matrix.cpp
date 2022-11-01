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
int median(vector<vector<int>> &matrix, int r, int c){

        

        // code here

         int mini=matrix[0][0];

         int maxi=matrix[0][c-1];

         for(int i=0;i<r;i++)

         {

             if(matrix[i][0]<mini)

             mini=matrix[i][0];

             if(matrix[i][c-1]>maxi)

             maxi=matrix[i][c-1];

         }

         int med=(r*c+1)/2;

         while(mini<maxi)

         {   int midpos=0;

             int mid=(mini+maxi)/2;

             for(int i=0;i<r;i++)

             {

                 midpos+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();

             }

             if(midpos<med)

                mini=mid+1;

                else

                 maxi=mid;

         }

         return mini;        
    }
};