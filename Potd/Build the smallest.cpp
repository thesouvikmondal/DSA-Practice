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

string buildLowestNumber(string num, int k)
{
    string ans;
    stack<char> st;
    for(auto it : num)
    {
        while(!st.empty() && k > 0 && st.top() > it)
        {
            st.pop();
            k-=1;
        }
        st.push(it);
    }
    while(k > 0 && !st.empty())
    {
        st.pop();
        k-=1;
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin() ,ans.end());
    while(ans.front() == '0' && ans.size() != 0)
    {
        ans.erase(ans.begin());
    }
    if(ans.size() == 0)
        return "0";
    return ans;
}
};
