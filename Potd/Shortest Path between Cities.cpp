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
    int shortestPath(int x, int y){ 
        int ans = 0;
        while(x != y){
            if(x > y) 
                x /= 2;
            else 
                y /= 2;
            ans++;
        }
        return ans;
    }
};
