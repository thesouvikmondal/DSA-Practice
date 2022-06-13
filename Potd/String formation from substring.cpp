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
class Solution{
    public:	
	bool istrue(string par,string s){
   if(par.size()%s.size()!=0)return false;
   string str=s+s;
   while(str.size()<par.size()){
       str.append(s);
   }
    if(par==str)return true;
   return false;
}  
int isRepeat(string s)
{
    int n=s.size();
    for(int i=n/2;i>=1;i--){
        if(istrue(s,s.substr(0,i)))return 1;
    }
    return 0;
}
};