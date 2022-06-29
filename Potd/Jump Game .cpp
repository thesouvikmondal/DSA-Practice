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
    int canReach(int A[], int N) {
        // code here
        int minJump = 0;
        for(int i = N - 2; i >= 0; i--){
            minJump++;
            if(A[i] >= minJump)
                minJump = 0;
        }
        if(minJump == 0) return 1;
        else return 0;
    }
};