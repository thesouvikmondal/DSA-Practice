#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;

class Solution {
   public:
    int mostBalloons(int N, pair<int, int> arr[]) {
        // Code here
        int ans=0;
        for(int i=0;i<N;i++)
        {
            int x1=arr[i].first,y1=arr[i].second;
            map<double,int> mp;
            int same=0;
            for(int j=0;j<N;j++)
            {
                int x2=arr[j].first,y2=arr[j].second;
                if(x1==x2 && y1==y2)
                {
                    same++;continue;
                }
                double x=x2-x1;
                double y=y2-y1;
                double slope=atan2(y,x);
                mp[slope]++;
            }
            for(auto i:mp)
            {
                ans=max(ans,i.second+same);
            }
        }
        return ans;
    }
};  