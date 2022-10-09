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
bool isPrime(int val){
	        for(int i=2;i<=sqrt(val);i++){
	            if(val%i==0){
	                return false;
	            }
	        }
	        return true;
	    }
	
		int NthTerm(int N){
		    // Code here
		    if(N==1){
		        return 1;
		    }
		    for(int i=0;i<N;i++){
		        if(isPrime(N+i) || isPrime(N-i)){
		            return i;
		        }
		    }
		}

};