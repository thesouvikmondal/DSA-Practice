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
#define ll long long
using namespace std;
class Solution {
public:
	// #define ll long long
    
	ll countSubarray(int arr[], int n, int k) {
	    // code here
	     ll total = (ll)n*(n+1)/2;

   ll c=0;

   for(int i=0;i<n;i++){

       if(arr[i]<=k){

           c++;

       }else{

           ll temp= c*(c+1)/2;

           total-=temp;

           c=0;

       }

   }

   // remaining c

   total-=(c*(c+1)/2);

   

   return total;
	}
};