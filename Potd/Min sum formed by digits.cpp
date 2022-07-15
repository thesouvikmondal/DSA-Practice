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
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
       sort(arr, arr+n);
        long long int first = 0;
        long long int second = 0;
        int i=0;
        int j=1;
        while(i<n || j<n){
            if(i<n){
                first = first*10 + arr[i];
                i = i+2;
            }
            if(j<n){
                second = second*10 + arr[j];
                j = j+2;
            }
            
            
            
        }
        return first + second;
    }
};