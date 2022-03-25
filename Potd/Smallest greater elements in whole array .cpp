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
int* greaterElement(int arr[], int n)
{
    
    int* ans = new int [n];
    for(int i=0;i<n;i++)ans[i] = arr[i];
    sort(arr,arr+n);
    
    
    for(int i=0;i<n;i++){
        int idx = upper_bound(arr,arr+n,ans[i])-arr;
        if(idx>= n)ans[i] = -10000000;
        else ans[i] =arr[idx];
    }
    // for(int i=0;i<n;i++)cout<<ans[i]<<" , ";
    // cout<<"from here"<<endl;
    
    return ans;
    // Complete the function
}
