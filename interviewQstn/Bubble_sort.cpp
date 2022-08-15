#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> & v){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[j]<v[i]){
                swap(v[i],v[j]);
            }
        }
    }
}

int main(){
    cout<<"enter a string"<<endl;

    vector<int> vec{1,5,3,2,9};
    bubble(vec);
    for(int i=0;i<5;i++){
        cout<<vec[i]<<" ";
    }
}

