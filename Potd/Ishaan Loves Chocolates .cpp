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

    int chocolates(int arr[], int n)
{
    
    int i = 0, j = n-1;
   
    while(i != j) {
        if(arr[i] > arr[j]) {
            i++;
        }
        else j--;
    }

    return arr[i];
    
}