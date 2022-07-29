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
     bool isPrime(int n)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    int firingEmployees(vector<int> &arr, int n){
        // code here
        vector<vector<int>> adj(n+1);
        int src;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            src=i+1;
            else
            adj[arr[i]].push_back(i+1);
        }
        vector<int> senior(n+1,0);
        queue<int> q;
        q.push(src);
        senior[src]=0;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(auto it:adj[u])
            {
                senior[it]=senior[u]+1;
                q.push(it);
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i != src)
            {
                if(isPrime(i+senior[i]))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};