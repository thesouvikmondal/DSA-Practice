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
class Solution{
	public:
string digitsNum(int N)
{
    vector<int> v;
    int temp = N;
    while(temp != 0){
        if(temp <= 9){
            v.push_back(temp);
            temp = 0;
        }else if(temp > 9){
            v.push_back(9);
            temp -= 9;
        }
    }
    sort(v.begin(), v.end());
    string s = "";
    for(int i = 0; i < v.size(); i++){
        s += to_string(v.at(i));
    }
    for(int i = 0; i < N; i++){
        s += '0';
    }
    return s;
}
};