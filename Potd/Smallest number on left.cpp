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
vector<int> leftSmaller(int n, int a[]){

        // code here

        vector<int> ans;

        vector<int> st;

        st.push_back(a[0]);

        ans.push_back(-1);

        for(int i=1;i<n;i++)

        {   st.push_back(a[i]);

            if(a[i-1]<a[i])

            {

                ans.push_back(a[i-1]);

            }

            else{

                int flag=0;

                for(int j=i-1;j>=0;j--)

                {

                    if(st[j]<a[i])

                    {

                        flag=1;

                        ans.push_back(st[j]);

                        break;

                    }

                }

                if(flag==0)

                {

                    ans.push_back(-1);

                }

            }

        }

        return ans;

    }
};