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
    int eulerPath(int N, vector<vector<int>> graph){
        vector<int>degree(N,0);
       for(int i=0;i<N;++i)
       {
           int count=0;
           for(int j=0;j<N;++j)
           {
               if(graph[i][j]==1)
                count++;
           }
           degree[i]=count;
       }
       int oddVertex=0;
       for(int i=0;i<N;++i)
       {
           if(degree[i]%2)
            oddVertex++;
       }
       
       return oddVertex==2?1:0;
    }
};