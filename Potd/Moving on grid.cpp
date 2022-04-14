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
    string movOnGrid(int r, int c) {
        return (r-1)%7==(c-1)%4 ? "ARYA" : "JON";
    }
};
