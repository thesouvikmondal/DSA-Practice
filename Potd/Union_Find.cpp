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
    //Function to merge two nodes a and b.
   void union_( int a, int b, int par[], int rank[]) 
    {
        int para = find(a,par);
        int parb=find(b,par);
        if(isConnected(a,b,par,rank))return;
        if(rank[para]>rank[parb]){
            rank[para]+=rank[parb];
            par[parb]=para;
        }
        else{
            rank[parb]+=rank[para];
            par[para]=parb;
        }
    }
    
    
    int find(int a,int par[]){
        int cur = par[a];
        while(cur!=par[cur]){
            par[cur] = par[par[cur]];
            cur = par[cur];
        }
        return cur;
    }
    
    //Function to check whether 2 nodes are connected or not.
    bool isConnected(int x,int y, int par[], int rank1[])
    {
        return find(x,par)==find(y,par);
    }
};