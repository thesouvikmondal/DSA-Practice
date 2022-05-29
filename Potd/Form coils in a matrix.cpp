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
class Solution {
     public:
  vector<vector<int>> formCoils(int n) {
        
        // code here
        int m=4*n;
        vector<vector<int>> v(m,vector<int> (m,0));
        int k=1;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            v[i][j]=k++;
        }
        vector<int> res1;
        int a=0,b=0,c=m,d=m-1;
        while(c>a&&d>b)
        {
            for(int i=a;i<c;i++)

                res1.insert(res1.begin(),v[i][b]);

            a++,b++;

            

            for(int j=b;j<d;j++)

                res1.insert(res1.begin(),v[c-1][j]);

            b++,c--;

            

            for(int i=c-1;i>=a;i--)

                res1.insert(res1.begin(),v[i][d-1]);

            c--,d--;

            

            for(int j=d-1;j>=b;j--)

                res1.insert(res1.begin(),v[a][j]);

            a++,d--;
        }
         vector<int>res2;

        a=4*n-1,b=a,c=0,d=1;

        while(a>c and b>d)

        {

            for(int i=a;i>=c;i--)

                res2.insert(res2.begin(),v[i][b]);

            a--,b--;

            

            for(int j=b;j>=d;j--)

                res2.insert(res2.begin(),v[c][j]);

            b--,c++;

            

            for(int i=c;i<=a;i++)

                res2.insert(res2.begin(),v[i][d]);

            c++,d++;

            

            for(int j=d;j<=b;j++)

                res2.insert(res2.begin(),v[a][j]);

            a--,d++;

        }

        return {res2,res1};
    }
};