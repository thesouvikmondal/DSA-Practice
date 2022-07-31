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
bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		for(int i=A;i<=B;i++){
		    
		    int ct = count(arr, arr+n,i);
		    if(ct<1){
		        return false;
		    }
		}
		return true;
	}
};