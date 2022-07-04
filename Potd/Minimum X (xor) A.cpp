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
    int minVal(int a, int b) {
       int setbitsA, setbitsB; setbitsA = setbitsB = 0;
       int tempA = a, tempB = b;
       while(tempA){
           int rsb = tempA&-tempA;
           setbitsA++;
           tempA -= rsb;
       }
       while(tempB){
           int rsb = tempB&-tempB;
           setbitsB++;
           tempB -= rsb;
       }
       int x = 0;
       if(setbitsA >= setbitsB){
         while(setbitsB){
            int shift = floor(log2(a));
            x += (1<<shift);
            setbitsB--;
            a = (a^(1<<shift));
         }  
       }else{
           x = a;
           setbitsB -= setbitsA;
           int curr = 0;
           while(setbitsB){
               if((a&1) == 0){
                   x += (1<<curr);
                   setbitsB--;
               }
               curr++;
               a >>= 1;
           }
       }
       return x;
   }
};