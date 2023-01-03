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
int removeStudents(int H[], int N) {
        // code here
        vector<int> v;

        v.push_back(H[0]);

        for(int i=1;i<N;i++){

            if(H[i] > v.back()) v.push_back(H[i]);

            else{

                int ind = lower_bound(v.begin(),v.end(),H[i]) - v.begin();

                v[ind] = H[i];

            }

        }

        return N - v.size();
    }
};