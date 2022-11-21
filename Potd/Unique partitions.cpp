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
vector <vector<int>> a;
	    void dfs(int i, vector <int> &b){
	        if(i == 0){
	            a.push_back(b);
	            return;
	        }
	        for(int j=0; j<i; j++){
	            if(b.empty() || i-j <= b.back()){
                    b.push_back(i-j);
                    dfs(j, b);
                    b.pop_back();
                }
	        }
	    }
        vector<vector<int>> UniquePartitions(int n) {
            vector <int> b;
            dfs(n, b);
            return a;
        }
};