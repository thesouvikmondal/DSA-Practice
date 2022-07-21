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
stack<int> _push(int arr[],int n)
{
   int mn=arr[0];
   stack<int>s;
   s.push(arr[0]);
   for(int i=1;i<n;i++)
   {
       if(mn<arr[i])
       {
          s.push(mn);
       }
        else
        {
            mn=arr[i];
            s.push(mn);
        }
   }
   return s;
}

void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}