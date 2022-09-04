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
    vector<string> pattern(int n){
        vector<string> ans;
        string temp;
        int j = 0;
        int k = 1;
        int z = 1;
        int sum = n*(n+1)+1;
        for(int i=n;i>=1;i--){
            for(int l=0;l<j;l++) temp += '-';
            j += 2;
            sum -= n;
            // cout<<sum<<endl;
            for(int l=1;l<=i;l++){
                temp +=  to_string(k);
                temp += '*';
                k++;
            }
            int m = sum;
            for(int l=1;l<=i;l++){
                temp += to_string(m);
                if(l != i) temp += '*';
                m++;
            }
            sum += z;
            z++;
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};