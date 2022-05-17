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
class Solution
{
     public:
   //Function to find the minimum element in sorted and rotated array.
   int minNumber(int arr[], int low, int high)
   {
       int n=high-low;
       int number,smallest=arr[0];
       for(int i=0;i<n;i++){
           if(arr[i]>arr[i+1]){
               number = arr[i+1];
               return number;
               break;
           } else if( arr[i]<smallest) {
               smallest = arr[i];            
           }
           
       }
       return smallest;
   }
};