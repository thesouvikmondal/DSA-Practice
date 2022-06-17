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
	bool isBipartite(int V, vector<int>adj[]){
    // Code here
    vector<int> Col(V , -1);
    for(int i=0; i<  V; i++){
        if(Col[i] == -1){
            if(!d_f_s(i , adj , Col , 1)) return  0;
        }
    }
    return 1;
}
bool d_f_s(int node , vector<int> adj[], vector<int> &ver , int col){
    if(ver[node] != -1 ){
        if(ver[node] == col) return 1;
        else return 0;
    }
    ver[node] = col;
    for(int j : adj[node]){
        if(! d_f_s(j , adj , ver ,  col ^ 1 )) return 0;
    }
    return 1;
}
};