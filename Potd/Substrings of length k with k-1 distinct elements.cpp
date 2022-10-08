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
int countOfSubstrings(string S, int K) {

        // code here

        unordered_map<char,int> mp;

        int n=S.length();

        int i,j;

        i=j=0;

        int count=0;

        while(j<n)

        {

            mp[S[j]]++;

           if ((j-i+1)==K)

            {

                if(mp.size()==(K-1))

                count++;

                mp[S[i]]--;

                if(mp[S[i]]==0)

                mp.erase(S[i]);

                i++;

            }

            j++;

        }

        return count;

    }

};