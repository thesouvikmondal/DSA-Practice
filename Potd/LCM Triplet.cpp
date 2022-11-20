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
long long lcmTriplets(long long N) {

        // code here

        if(N==2 || N==1){

            return N;

        }

        if(N%2==0){

            if(N%3==0){

                return (N-1)*(N-2)*(N-3);

            }

            else{

                return N*(N-1)*(N-3);

            }

           } 

        else{

                return N*(N-1)*(N-2);

            }

        

    }
};