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
vector<int> Smallestonleft(int arr[], int n)
{
    map<int,int> ma;
    vector<int> ans;    
    for(int i=0;i<n;i++)
    {
        ma[arr[i]]++;
        
        auto ptr=ma.find(arr[i]);
        
        if(ptr==ma.begin())
        {
            ans.push_back(-1);
        }
        else
        {
            auto bef=prev(ptr,1);// previous iterator
            ans.push_back(bef->first);
        }
    }
    return ans;
}
