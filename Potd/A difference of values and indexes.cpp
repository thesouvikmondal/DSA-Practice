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
int maxDistance(int arr[], int n) 

    { 

        // Complete the function

        int a = INT_MIN, b = INT_MAX, c = INT_MIN, d = INT_MAX;

        for(int i=0; i<n; i++)

        {

            a = max(a, arr[i]-i);

            b = min(b, arr[i]-i);

 

            c = max(c, arr[i]+i);

            d = min(d, arr[i]+i);

        }

        return max(a-b, c-d);

    }
};