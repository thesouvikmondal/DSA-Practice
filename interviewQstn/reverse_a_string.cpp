#include<bits/stdc++.h>
using namespace std;

// //using for loop
// void reverseStr(string& str)
// {
//     int n = str.length();
 
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - 1 - i]);
// }


//using while loop
void reverseStr(string& str)
{
    int n = str.length()-1;
    int i=0;
 
    while(i<=n){
        swap(str[i], str[n]);
        i++;n--;
    }
}


int main(){
   string str = "gfp";
    reverseStr(str);
    cout << str;
    return 0;
}
