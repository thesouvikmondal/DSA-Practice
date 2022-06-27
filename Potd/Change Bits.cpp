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
class solution{
     public:
    vector<int> changeBits(int N) {
       // code here
       int c=0,t=N;
       while(N){
           c++;
           N=N>>1;
       }
       int x=pow(2,c)-1;
       return {x-t,x};
   }
};