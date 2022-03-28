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
    int swapBits(int x, int p1, int p2, int n)
    {
        
        vector<int> v(32, 0); int j = 0;
        while(x){
            int bit = x&1;
            x = x>>1;
            v[j++] = bit;
        }
        
       int t1 = p1+n; int t2 = p2+n;
        
        while(p1<t1 && p2<t2)
            swap(v[p1++], v[p2++]);
            
        int p = 0, ans = 0;
        for(int i = 0; i<32; i++){
            if(v[i]==1)
                ans+=pow(2, p);
            p++;
        }
        return ans;
    }
};