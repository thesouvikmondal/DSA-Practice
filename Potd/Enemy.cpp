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
int largestArea(int n,int m,int k,vector<vector<int>> &enemy)

        {

            

            vector<int>v1;

            vector<int>v2;

            for(auto it:enemy)

            {

                v1.push_back(it[0]);

                v2.push_back(it[1]);

                

            }

            sort(v1.begin(),v1.end());

            sort(v2.begin(),v2.end());

            v1.push_back(n+1);

            v2.push_back(m+1);

            int row_max=INT_MIN;

            int start=0;

            for(auto it:v1)

            {

                 row_max=max(row_max,it-start-1);

                 start=it;

            }

             int col_max=INT_MIN;

            start=0;

            for(auto it:v2)

            {

                 col_max=max(col_max,it-start-1);

                 start=it;

            }

            

            return row_max*col_max;

            

        }
};