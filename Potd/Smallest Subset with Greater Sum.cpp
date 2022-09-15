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
    int minSubset(vector<int> &Arr,int N){

        

        int ans = 0;    //to collect result

        sort(Arr.begin(), Arr.end()); //sort the array

        

        //sumL stores sum of all elements in Arr from left side

        long long sumL = 0;

        for(auto i : Arr) sumL += i;

        

        //sumR stores sum of elements in Arr from right

        long long sumR = 0;

        

        //for each element from right in sorted array

        for(int i=N-1; i>=0; i--){

            sumL -= Arr[i]; //remove it from left

            sumR += Arr[i]; //add it to right

            ans++;          //increase answer as we added one item to right

            

            //at any stage if sumR > remmaining ie sumL

            //return number of elements in sumR ie ans

            if(sumR > sumL) return ans;

        }

    }
};