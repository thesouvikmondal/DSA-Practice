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
using namespace std;
class solution{
public:
    int maximumSumSubarray(int k, vector<int> &nums , int N){
        // code here 
        	int sum=0;
		    int maxSum=0;
		
		
		for(int i =0;i<k;i++){
			sum+=nums[i];
			maxSum=sum;

		}


		for(int i=k;i<N;i++){
			sum+=nums[i]-nums[i-k];
		    maxSum=max(maxSum,sum);
			
		}
	return maxSum;
		
		
    }
};
