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
int steppingNumbers(int N, int M)
    {
        // create a queue of strings, and insert [0->9] as string
        // as using this queue we will generate stepping numbers later on
        queue<string> q;
        for(int i = 0; i <= 9; ++i) {
            q.push(to_string(i));
        }
        
        bool countStart = false;
        int count = 0;
        bool isZerothCheck = true;
        
        while(!q.empty()) {
            string curr = q.front();
            int lastDigit = curr[curr.size() - 1] - '0';
            
            // (stoi converts an string to integer)
            // if current string (the one at the front() of queue q : curr) is >= N then start the count!
            if(stoi(curr) >= N) {
                countStart = true;
            }
            // if we exceed the upper bound, then need to stop! and return the result. 
            if(stoi(curr) > M) {
                return count;
            }
            // count when we are in range
            if(countStart) count++;
            
            // if this is not zeroth check, then create stepping numbers 
            if(!isZerothCheck) {
                for(int i = 0; i <= 9; ++i) {
                    if(abs(lastDigit - i) == 1) {
                        q.push(curr + to_string(i));
                    }
                }
            } else {        // else set the var false for next check, as only first time it is zeroth check!
                isZerothCheck = false;
            }
            
            q.pop();        // pop out the used element from queue
        }
        return count;
    }
};