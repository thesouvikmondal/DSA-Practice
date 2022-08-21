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
    int* game_with_number(int arr[], int n)
{
    for(int i=0;i<n;i++)
   {
       if(i!=n-1)
       {
        arr[i] = arr[i]^arr[i+1];    
       }
       
   }
   return arr;
    // Complete the function
    
}
};