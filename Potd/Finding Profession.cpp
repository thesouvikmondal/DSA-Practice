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
    char profession(int level, int pos){
    int i = 1;
    while (i < pos) i <<= 1;
    return trans(pos, i) ? 'e' : 'd';
    
}   
bool trans(int pos, int mask){
    if (pos == 1) return true;
    while (mask >= pos) mask /= 2;
    return !trans(pos - mask, mask/2);
}
};