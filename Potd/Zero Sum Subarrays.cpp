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
long long int findSubarray(vector<long long int> &arr, int n ) {
        long long int result = 0;
        map<long long int, int> freq;
        long long int sum = 0;
        freq[0]++;
        for(int i = 1; i <= n; i++){
            sum += arr[i-1];
            freq[sum]++;
            result += freq[sum] - 1;
        }
        return result;
    }
};