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
        void nullPoints(int n, double magnets[], double getAnswer[])
   {
       for(int i=0;i<n-1;i++){
           getAnswer[i]=neutral_point(magnets[i],magnets[i+1],magnets,n);
       }
   }
   double neutral_point(double low,double high,double magnets[],int n){
       while(low<high){
           double mid=(low+high)/2;
           double totalforce=0;
           for(int i=0;i<n;i++){
               totalforce+=1/(mid-magnets[i]);
           }
           if(abs(totalforce)<0.000001)
           return mid;
           if(totalforce<0)
           high=mid;
           else
           low=mid;
       }
       return low;
   }
};