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
int swapBitGame(long long N){

        // code here 

        int count = 0;

        while(N>0)

        {

            if(N&1)

              count++;

              

            N=N/2;  

        }

        return count%2==0?2:1;

    }
};