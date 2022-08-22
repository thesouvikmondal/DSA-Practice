// given an array and a 2d array ,we have to reverse the array with the index of 2d arrays, like 2d array={1,2} so we have to reversre the main array between index of 1 and 2
//1 4 3 2 5
//1 4 5 2 3
//1 4 2 5 3 


#include<bits/stdc++.h>
using namespace std;
using std::vector;

int main(){
    vector<int> vec{1,2,3,4,5};
    vector<vector<int>> inter{{1,3},{2,4},{2,3}};
    for(int i=0;i<3;i++){
        int s=inter[i][0];
        int e=inter[i][1];
        reverse(vec.begin()+s,vec.begin()+e+1);

    }

    for(int i=0;i<=4;i++){
        cout<<vec[i]<<" ";
    }


}