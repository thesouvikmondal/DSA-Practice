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
vector<int> permute(vector<vector<int>> &arr, int n)
{
    
    // Complete the function
     for(int i = 0; i < n; i++) arr[i].push_back(i + 1);
    sort(arr.begin(), arr.end(), [](auto &a, auto &b){
        int one = a[0] + a[1];
        int two = b[0] + b[1];
        if(one == two) return a[2] < b[2];
        return one < two;
    });
    
    vector<int> ans;
    for(auto it: arr) ans.push_back(it[2]);
    return ans;
    
}
