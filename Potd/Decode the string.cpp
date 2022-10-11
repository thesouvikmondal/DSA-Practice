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
string decodedString(string s){

        stack<pair<string, int>> pr;

        string currentString = "";

        int currentNum = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == '[') {

                pr.push({currentString, currentNum});

                currentNum = 0;

                currentString = "";

            }

            else if (s[i] == ']') {

                string temp = "";

                pair<string, int> ptr = pr.top();

                pr.pop();

                for (int i = 0; i < ptr.second; i++) {

                    temp += currentString;

                }

                currentString = ptr.first + temp;

            }

            else if (s[i] >= '0' && s[i] <= '9') {

                currentNum = (currentNum * 10) + (s[i] - 48);

            }

            else {

                currentString += s[i];

            }

        }

        return currentString;

    }

};