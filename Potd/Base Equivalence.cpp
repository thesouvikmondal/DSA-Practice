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
string baseEquiv(int n, int m)

    {

        string s = "";

        int f = 0 ;

        for(int ind = 2 ; ind <= 32 ; ind++)

        {

            int n1 = n ;

            int c = 0 ;

            while(n1 > 0 )

            {

                c = c + 1 ; // counted no of digits 

                if(c > m)

                {

                    break ;

                }

                n1 = n1 / ind ;

            }

            if(c == m )

            {

                s = "Yes";

                f = 1 ;

                break ;

            }

        }

        if(f == 0 ) // just to check s = "yes" or not 

        {

            s = "No";

        }

        return s ;
    }
};