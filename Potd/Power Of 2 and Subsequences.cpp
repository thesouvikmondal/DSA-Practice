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
    bool isTwoPower(long long int t){
        int ans=0;
        while(t!=0){
            ans+=(t&1);
            if(ans>1){
                return false;
            }
            t=t>>1;
        }
        return true;
    }
    long long numberOfSubsequences(int N, long long A[]){
        // code here 
        int ans=0;
        for(int i=0;i<N;i++){
            ans+=isTwoPower(A[i]);
        }
        int mod=1000000007;
        long long int r=1;
        for(int i=1;i<=ans;i++){
            r=(r*2)%mod;
        }
        return r-1;
    }
};