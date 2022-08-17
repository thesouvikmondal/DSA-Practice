//Maximum Subarray or Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
         //optimal soln(O(n))
        long long sum=0;
        long long maxx=INT_MIN;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxx=max(maxx,sum);
            if(sum<0) sum=0;
        }
        
        //for vector
        // for(auto x:arr){
        //     sum+=x;
        //     maxx=max(maxx,sum);
        //     if(sum<0) sum=0;
        // }
        return maxx;
        
    }
};


int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}