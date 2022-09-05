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
    int evalRPN(vector<string>& tokens) {
        stack<int> myStack;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int a=myStack.top();
                myStack.pop();
                int b=myStack.top();
                myStack.pop();
                myStack.push(a+b);
            }
            else if(tokens[i]=="-"){
                int a=myStack.top();
                myStack.pop();
                int b=myStack.top();
                myStack.pop();
                myStack.push(b-a);
            }
            else if(tokens[i]=="*"){
                int a=myStack.top();
                myStack.pop();
                int b=myStack.top();
                myStack.pop();
                myStack.push(a*b);
            }
            else if(tokens[i]=="/"){
                int a=myStack.top();
                myStack.pop();
                int b=myStack.top();
                myStack.pop();
                myStack.push(b/a);
            }
            else{
                //string to integer finction "is s to i" =stoi
                myStack.push(stoi(tokens[i]));
            }
            
        }
        int ans= myStack.top();
        return ans;
    }
};
