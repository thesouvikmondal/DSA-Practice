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
 bool isFit(int arr[], int brr[], int n){

     

      sort(arr,arr+n);

      sort(brr,brr+n);

        

      for(int i=0;i<n;i++)

      {

          if(arr[i]>brr[i])

           return 0;

      }

      

      return 1; 

      

 
    }
};