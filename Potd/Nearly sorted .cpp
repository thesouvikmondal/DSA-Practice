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
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int k){
        
        set<int> st;
        for(int i = 0; i < k; i++)
            st.insert(arr[i]);
        
        vector<int> res;
        for(int i = 0; i <= min(n - 1, n - k - 1); i++) {
            
            st.insert(arr[i + k]);
            int x = *(st.begin());
            res.push_back(x);
            st.erase(x);
        }
        
        for(auto x : st) res.push_back(x);
        return res;
    }
};
