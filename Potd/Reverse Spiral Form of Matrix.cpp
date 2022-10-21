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
vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {

        

        vector<int>ans;

        

        int firstRow = 0;

        int lastRow = R-1;

        int firstCol = 0;

        int lastCol = C-1;

        

        int total = R*C;

        

        int count = 0;

        

        while(count<total)

        {

            for(int index=firstCol;index<=lastCol && count<total;index++)

            {

                ans.push_back(a[firstRow][index]);

                count++;

            }

            

            firstRow++;

            

            for(int index=firstRow;index<=lastRow && count<total;index++)

            {

                ans.push_back(a[index][lastCol]);

                count++;

            }

            

            lastCol--;

            

            for(int index=lastCol;index>=firstCol && count<total;index--)

            {

                ans.push_back(a[lastRow][index]);

                count++;

            }

            

            lastRow--;

            

            for(int index=lastRow;index>=firstRow && count<total;index--)

            {

                ans.push_back(a[index][firstCol]);

                count++;

            }

            

            firstCol++;

        }

        

        reverse(ans.begin(),ans.end());

        

        return ans;

    }
};