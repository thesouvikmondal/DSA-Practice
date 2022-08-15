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

struct Node {
    struct Node* left, *right;
    int data;
};


class Solution{
    public:
    void getPath(struct Node* root, int f, int s, vector<char>& pf, vector<char>& ps,vector<char>& cp,int found){    
    if(!root || found == 2)
        return ;
    if(root->data == f){
        pf = cp  ;
        found++ ;
    }
    if(root->data == s){
        ps = cp ;
        found++ ;
    }
    cp.push_back('L') ;
    getPath(root->left,f,s,pf,ps,cp,found) ;
    cp.pop_back() ;
    cp.push_back('R') ;
    getPath(root->right,f,s,pf,ps,cp,found) ;
    cp.pop_back() ;
}

int NumberOFTurns(struct Node* root, int first, int second){
    vector<char> p1,p2,cp ;
    getPath(root,first,second,p1,p2,cp,0) ;
    int i=0 ;
    for(; i<min(p1.size(),p2.size()) ; i++){
        if(p1[i] != p2[i])
            break ;   
    }
    int ans = (i != p1.size() && i != p2.size()) ;
    
    for(int j=i ; j<(int)p1.size()-1 ; j++){
        if( p1[j] != p1[j+1] )
            ans++ ;
    }
    for(int j=i ; j<(int)p2.size()-1 ; j++){
        if( p2[j] != p2[j+1] )
            ans++ ;
    }
    return ans == 0 ? -1 : ans  ;
}
};