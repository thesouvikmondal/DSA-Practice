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
int maximizeSum(int a[], int n) 

    {

        // Complete the function

        sort(a, a+n);

        unordered_map<int,int>mp;

        int ans=0;

        for(int i=0;i<n;i++)mp[a[i]]++;

        for(int i=n-1;i>=0;i--){

            if(mp[a[i]]-->0){

                ans+=a[i];

                mp[a[i]-1]--;

            }

            

        }

            return ans;

    }

};