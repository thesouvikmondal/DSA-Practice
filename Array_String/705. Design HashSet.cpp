#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
class MyHashSet {
public:
    vector<int> set;
    MyHashSet() {
      set = vector<int>( 1000001,0);
    }
    
    void add(int key) {
            if(set[key]==0){
                set[key]=1;
            }
    }
    
    void remove(int key) {
            if(set[key]!=0){
                set[key]=0;
            }
    }
    
    bool contains(int key) {
            if(set[key]==1){
                return true;
            }
        return false;
    }
};
