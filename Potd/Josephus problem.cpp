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
        int f(int n, int k){
                //Base Case
                if(n==1) return 0;
                int x=f(n-1, k);
                int y=(x+k)%n;
                return y;
            }
            int josephus(int n, int k){
                return 1+f(n, k);
            }
};