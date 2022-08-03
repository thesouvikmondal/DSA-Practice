#include<bits/stdc++.h>
using namespace std;

//gcd with Euclid algo
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    //return the max num after loop ,that store gcd 
    return a;
}

int main(){
    int a,b;
    cout<<"enter 2 nums"<<endl;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b);
}