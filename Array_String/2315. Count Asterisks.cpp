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
   int countAsterisks(string s) {
        int count = 0 , count1 = 0 ; 
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == '|')
            {
                count1 ++ ;  
            }
            if(count1 % 2 == 0 && s[i] == '*' )
                {
                    count ++ ; 
                }
        }
        return count ; 
        
    }
};