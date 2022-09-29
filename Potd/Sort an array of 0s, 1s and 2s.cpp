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
void sort012(int arr[], int n)
    {
        int l=0,m=0,r=0;
        for(auto i=0;i<n;i++){
            if(arr[i]==0)
                l++;
            else if(arr[i]==1)
                m++;
            else
                r++;
        }
        int i=0;
        while(l--){
            arr[i++]=0;
        }
        while(m--){
            arr[i++]=1;
        }
        while(r--){
            arr[i++]=2;
        }
        
    }
    
};