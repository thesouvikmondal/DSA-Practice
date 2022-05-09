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
class Solution{
public:
    int nthItem(int L1, int L2, int a[], int b[], int N)
    {
        set<int>s;
        
         for(int i=0;i<L1;i++)
         {
             for(int j=0;j<L2;j++)
             {
                 int sum=a[i]+b[j];
                 s.insert(sum);
             }
         }
         
        int x, count=0;
         if(N>s.size())
         return -1;
         for(auto i:s)
         {
             count++;
             if(count==N)
             {
                x=i; 
                break;
             }
         }
         return x;
    }
};