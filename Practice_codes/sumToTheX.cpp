#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(1+i);
    }
    for(int i=0;i<n;i++){
        cout<<vec[i];
        //12345
    }
    int i=0,j=n-1;
    while(i<j){
        int sum1=0,sum2=0;
        sum1+=vec[i];
        sum2+=vec[j];
        i++;j--;
        

    }
}
