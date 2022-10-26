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
int findMin(int n, char a[]){

        map<char,int> mp;

        for(int i=0;i<n;i++) mp[a[i]]++;

        if(max(mp['R'],max(mp['B'],mp['G']))==n) return n;

        else if(mp['R']%2==mp['B']%2 and mp['R']%2==mp['G']%2) return 2;

        return 1;

    }

};