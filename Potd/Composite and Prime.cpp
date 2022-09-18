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
int Count(int L, int R){

     // Code here

     int prime = 0,composite = 0;

     for(int i = L;i<=R;i++){

         if(isPrime(i)){

             prime++;

         }else{

             if(i>1)

                     composite++;

         }

     }

         int diff = composite - prime;

     return diff;

 }

 

 bool isPrime(int n){

     bool isPrime = false;

     // Corner case

            if (n <= 1)

                return isPrime;

            if(n ==2) 

                return !isPrime;

         

            // Check from 2 to n-1

            for (int i = 2; i <= sqrt(n); i++)

                if (n % i == 0)

                    return isPrime;

         

            return !isPrime;

 }
};