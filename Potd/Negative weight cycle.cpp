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
using namespace std;
class Solution {
    public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    vector<int>dist(n, INT_MAX);
	    dist[0] = 0;
	    for(int i = 1;i<=n-1;i++) for(auto edge : edges) if(dist[edge[0]] != INT_MAX && dist[edge[0]] + edge[2] < dist[edge[1]]) dist[edge[1]] = dist[edge[0]] + edge[2];
	    for(auto edge : edges) if(dist[edge[0]] != INT_MAX && dist[edge[0]] + edge[2] < dist[edge[1]]) return 1;
	    return 0;
	    }
};