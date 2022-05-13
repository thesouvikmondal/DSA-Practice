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
    
    static bool compare(int a, int b)
    {
        return a>b;
    }
    
    vector<int> maximizeArray(int arr1[], int arr2[], int n)
    {
            // code here
            
            //declaring an array which consists of array1 and array2 elements
            vector<int> arr3(2*n);
            int k=0;
            for(int i=0; i<n; i++)
            {
                arr3[k++] = arr1[i];
            }
            for(int i=0; i<n; i++)
            {
                arr3[k++] = arr2[i];
            }
            
            //sorting that array3
            sort(arr3.begin(), arr3.end(), compare);
            
            unordered_set<int> set;
            
            int i=0;
            while(set.size() != n)
            {
                if(set.find(arr3[i]) == set.end())
                {
                    set.insert(arr3[i]);
                }
                i++;
            }
            //storing n unique elements from array3
            //as we are iterating through array3 which is in decsending order
            //those n elements in the set will be larger elements
            
            k=0;

            //now iterating through arr2 and checking whether that element is p
            //present in the set. if yes add it to our ans
            for(int i=0; i<n; i++)
            {
                if(set.find(arr2[i]) != set.end())
                {
                    arr3[k++] = arr2[i];
                    set.erase(arr2[i]);
                }
            }
            
            //now iterating through arr1 and checking whether that element is p
            //present in the set. if yes add it to our ans
            for(int i=0; i<n; i++)
            {
                if(set.find(arr1[i]) != set.end())
                {
                    arr3[k++] = arr1[i];
                    set.erase(arr1[i]);
                }
            }
            
            //array3's first k elements is our answer so return that
            
            vector<int> ans{arr3.begin(), arr3.begin()+k};
            return ans;
    }
};