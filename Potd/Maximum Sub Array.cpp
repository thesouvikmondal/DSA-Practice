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
vector<int> findSubarray(int arr[], int n) {

     // manish 

     vector<int>ans;

     // stack store start and end index of subarray

     stack<pair<int,int>>st;

     int i=0,j=0;

     int sum=0;

     int maxsum=0;

     while(j<n){

         if(arr[j]>=0)sum+=arr[j];

         else{

             if(sum>maxsum){

                

                 maxsum=sum;

                // sum is greater then no need to store 

                // that subarray so,remove that  subarray

                 if(!st.empty()){

                     st.pop();

                 }

                 st.push({i,j});

             }

             sum=0;

             i=j+1;

         }

         j++;

         

     }

     // 1 2 -3 8 60 2 3

     // for last index we have to calculate sum

     sum=0;

     for(int k=i;k<n;k++)sum+=arr[k];

   

     if(sum>maxsum){

         maxsum=sum;

            if(!st.empty()){

                st.pop();

            }

            st.push({i,j});

     }

     // then push all values from stack

     if(!st.empty()){

         pair<int,int>pb=st.top();

         int i=pb.first;

         int j=pb.second;

         for(int k=i;k<j;k++){

             ans.push_back(arr[k]);

         }

     }

     else ans.push_back(-1);

     return ans;

 }

};