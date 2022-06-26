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
class solution{
public:
    int countDistinctSubarray(int arr[], int n) {
   unordered_set<int> s(arr, arr+n);
   unordered_map<int, int> m;
   int i = 0, j = 0, count = 0;
   while(j < n) {
       m[arr[j]]++;
       while(i <= j && m.size() == s.size()) {
           count += n-j;
           if (--m[arr[i]] == 0) m.erase(arr[i]);
           i++;
       }
       j++;
   }
   return count;
}
};
