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
    int count(int N, vector<int> A,int X)
    {
        // code here
        int p = 0, ans = N;
       for(int i=31; i >= 0; i--)
       {
           int bit = (X>>i) & 1;
           if(bit == 1)
           {
               p = p | (1<<i);
           }
           else
           {
               int temp = p | (1<<i);
               int cnt = 0;
               for(auto ele: A)
               {
                   if((ele&temp) == temp)
                   {
                       cnt++;
                   }
               }
               ans = min(ans,N-cnt);
           }
       }
       return (ans);
    }
};