#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class Solution{
public:
    int findHeight(int N, int arr[]){
        int h=1, a=arr[N-1];
        while(arr[a]!=-1){
            a=arr[a];
            h++;
        }
        return h+1;
    }
};