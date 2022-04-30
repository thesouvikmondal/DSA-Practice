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
class Solution {
public:
    int calc(vector<int>& a, vector<int>& b){
        int res = 0;
        for(int i = 0; i < 26; i++){
            if(a[i] < b[i]) res++;
        }
        return res;
    }
    void print(vector<vector<int>> &arr){
        for(vector<int> a : arr){
            for(int i : a) cout << i << " ";
            cout << endl;
        }
    }
	vector<int>SolveQueris(string str, vector<vector<int>>Query){
	    // Code here
	    int n = str.size();
	    vector<vector<int>> dp(n+1);
	    vector<int> arr(26, 0);
	    int i = 1;
	    dp[0] = arr;
	    for(char c: str){
	        arr[c-'a']++;
	        dp[i++] = arr;
	    }
	   // print(dp);
	    vector<int> res(Query.size());
	    i = 0;
	    for(vector<int> Q : Query){
	        int l = Q[0], r = Q[1];
	        res[i++] = calc(dp[l-1], dp[r]);
	    }
	    return res;
	}
};