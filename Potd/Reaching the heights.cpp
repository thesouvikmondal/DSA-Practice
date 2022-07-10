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
vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    vector<int>v;
    sort(a,a+n);
    int i=0,k=0,j=n-1;
    while(i<n){
        if(i%2==0){
            v.push_back(a[j]);
            j--;
        }
        else{
            v.push_back(a[k]);
            k++;
        }
        i++;
    }
    if(n==1)return v;
    
    if(v[0]==v[1]){
        vector<int>ans;
        ans.push_back(-1);
        return ans;
    }
    return v;
}