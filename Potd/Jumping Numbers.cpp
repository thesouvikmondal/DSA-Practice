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
 void create_jumping(long long num, long long maxi,long long&max_jumping)

    {

        if(num > maxi)

        {

            return;

        }

        

        max_jumping =max(max_jumping,num);

        

        int plus_one_diff = num%10 + 1;

        int minus_one_diff = num%10 - 1;

        

        if(plus_one_diff <10)

        {

            create_jumping(num*10 + plus_one_diff,maxi,max_jumping);

        }

        

        if(minus_one_diff>=0)

        {

            create_jumping(num*10 + minus_one_diff,maxi,max_jumping);

        }

    }

    long long jumpingNums(long long X) {

 

        //we will be appending the numbers and making our own number

        long long maxi_jumping =-1;

        

        for(int i=1;i<=9;i++)

        {

            create_jumping(i,X,maxi_jumping);

        }

        

        return maxi_jumping;

 

    }
};