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
char check(char c){
        if(c=='0')return '9';if(c=='9')return '0';
        if(c%2==0)c -=1;
        else c+=1;return c;
    }
    int minLength(string s, int n) {
        stack<char> st;int i{};
        while(i<n){
            while(!st.empty() && st.top()==check(s[i])){
                st.pop();i++;
            }
            if(i==n)break;
            st.push(s[i]);i++;
        }
        return st.size();
    } 
};