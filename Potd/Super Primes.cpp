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
class Solution {
    public:	
	bool isPrime(int n){
       for(int i=2;i<=sqrt(n);i++){
           if(n%i==0){
               return false;
           }
       }
       return true;
   }

int superPrimes(int n)
{
    // Your code goes here
    //sum of two odd is even
    //o + e = odd 
    // 2 is the only even prime
    // o+2=odd
    int cnt=0;
    for(int i=5;i<=n;i++){
        if(isPrime(i) && isPrime(i-2)){
            cnt++;
        }
    }
    
    return cnt;
}
};
