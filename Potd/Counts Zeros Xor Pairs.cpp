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
long long int calculate(int a[], int n)
{
    
     
   sort(a,a+n);
   long long y=a[0],cnt=1,sum=0;
   for(int i=1;i<n;i++)
   {
       if(a[i]==y)
       cnt++;
       else
       {
           long long b=cnt-1;
           sum+=(b*(b+1)/2);
           cnt=1;
           y=a[i];
       }
   }
    long long b=cnt-1;
           sum+=(b*(b+1)/2);
           return sum;
   
}