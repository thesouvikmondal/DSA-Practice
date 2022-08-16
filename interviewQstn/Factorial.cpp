#include<bits/stdc++.h>
using namespace std;
//Factorial (Without recursion)
int main(){
    int n;
    cout<<"enter a num"<<endl;
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    cout<<"factorial is"<<ans;
}