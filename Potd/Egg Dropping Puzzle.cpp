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
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
     int sumxCi(int x, int n, int k)
    {
        int sum = 0, term = 1;
        for (int i = 1; i <= n; ++i) {
            term *= x - i + 1;
            term /= i;
            sum += term;
            if (sum > k)
                return sum;
        }
        return sum;
    }
    
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.

    int eggDrop(int n, int k) 
    {
        int l = 1, r = k;
        while (l < r) {
            int mid = (l + r) / 2;
            if (sumxCi(mid, n, k) < k)
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};