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
class Solution{
    public:
    static bool comp(vector<int>& a,vector<int>& b)
    {
        if(a[0]==b[0])
        return b[1]<b[1];
        return a[0]<b[0];
    }
    int max_non_overlapping( vector< vector<int> >& ranges )
    {
        // code here
        sort(ranges.begin(),ranges.end(),comp);
        int cnt=1,curx=ranges[0][0],cury=ranges[0][1];
        for(int i=1;i<ranges.size();i++)
        {
            // cout<<"initial:"<<curx<<" "<<cury<<"\t";
            if(ranges[i][0]>=cury)
            {
                cnt++;
                cury=ranges[i][1];
                curx=ranges[i][0];
                // cout<<"changed(if):"<<curx<<" "<<cury<<endl;
            }
            else
            {
                if(cury>ranges[i][1])
                {
                    cury=ranges[i][1];
                    curx=ranges[i][0];
                }
                // cout<<"changed(else):"<<curx<<" "<<cury<<endl;
            }
        }
        return cnt;
    }
};