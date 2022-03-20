#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
class solution{
public:
    string chooseandswap(string a){
        // Code Here
        map<char,bool>mp;
        for(char c : a)
        mp[c]=true;
        for(char c : a)
        {
            for(char d='a' ;d<c;d++)
            {
                if(mp[d])
                {
                    for (char &cc : a)
                    {
                        if (cc == d)
                        cc = c;
                        else if (cc == c)
                        cc = d;
                    }
                    return a;
                }
            }
            mp[c]=false;
        }
        return a;
    }
    
};