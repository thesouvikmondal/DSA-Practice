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
using namespace std;

void merge(int arr[], int mid,int r,int l){
    int n1=(mid-r)+1;
    int n2=l-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[r+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=r;
    while(i<n1 && j<n2){
         if(a[i]<b[j]){
             arr[k]=a[i];
             i++;
             k++;
         }
         else{
             arr[k]=b[j];
             k++;
             j++;
         }
    }

    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;
    }

}

void mergesort(int arr[],int r, int l){
    if(r<l){
        int mid=(r+l)/2;
        mergesort(arr,r,mid);
        mergesort(arr,mid+1,l);
        merge(arr,mid,r,l);
    }
}








int main(){

int arr[]={3,5,8,4,8,1};
mergesort(arr,0,5);
for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}

}