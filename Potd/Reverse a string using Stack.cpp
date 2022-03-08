#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
using std::vector;
using std::string;
using std::max;
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}
char* reverse(char *S, int len)
{
   //code here
   stack<int> s;
   for(int i=0;i<len;i++){
       s.push(S[i]);
   }
   
  int  i=0;
while(!s.empty())
{
     S[i] = s.top();
    s.pop();
    i++;
    
}
return S;
}