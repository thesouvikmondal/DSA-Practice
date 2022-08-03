#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool is_prime=true;
    cout<<"enter a num"<<endl;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            is_prime=false;
            break;
        }
    }

    if(is_prime==true){
        cout<<"this is prime"<<endl;
    }
    else{
        cout<<"this is not prime"<<endl;
    }
    return 0;
}