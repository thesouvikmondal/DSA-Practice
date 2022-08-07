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
    public:
   int getOddOccurrence(int arr[], int n) {
       int ans=0;
       for(int i=0;i<n;i++){
           ans^=arr[i];
       }
       return ans;
   }
};