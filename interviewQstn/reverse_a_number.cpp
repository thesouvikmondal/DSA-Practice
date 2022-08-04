#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,rem,reversed_num=0;
    cout<<"enter a num"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        reversed_num=reversed_num*10+rem;
        n/=10;
    }
    cout<<"reveversed number is :"<<reversed_num<<endl;
}