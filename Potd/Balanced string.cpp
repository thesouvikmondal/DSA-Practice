#include<bits/stdc++.h>
#include<vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <set>
using std::vector;
using std::max;
using namespace std;
class Solution {
public:
string HalfAns(int s,int e){
        string ans;
        for(int i=0;i<s;i++){
            ans.push_back(char(97+i));
        }
        for(int i=e;i>0;i--){
            ans.push_back(char(122-i+1));
        }
        return ans;
    }

    string BalancedString(int N) {
        string result;
        if(N<=26 && N%2==0){
            result=HalfAns(N/2,N/2);
        }
        if(N>26 && N%2==0){
            string result1="";
            while(N-26 >=0){
                // string result1="";
                result1=result1.append(HalfAns(13,13));
                N=N-26;
                if(N<26){
                    string result2=HalfAns(N/2,N/2);
                    result=result1.append(result2);
                }
            }
        }
        if(N<=26 && N%2!=0){
            int temp=N;
            int m,sum=0;
            while(temp>0){
                m=temp%10;
                sum=sum+m;
                temp=temp/10;
            }
            // cout<<sum<<endl;
            if(sum%2 == 0){
                result=HalfAns((N+1)/2,(N-1)/2);
            }
            if(sum%2 !=0){
                result=HalfAns((N-1)/2,(N+1)/2);
            }
        }
        if(N>26 && N%2 !=0){
            int temp=N;
            int m,sum=0;
            while(temp>0){
                m=temp%10;
                sum=sum+m;
                temp=temp/10;
            }
            string result1="";
            while(N-26 >=0){
                // string result1="";
                result1=result1.append(HalfAns(13,13));
                N=N-26;
                if(N<26){
                    if(sum%2 == 0){
                        string result2=HalfAns((N+1)/2,(N-1)/2);
                        result=result1.append(result2);
                    }
                    if(sum%2 !=0){
                        string result2=HalfAns((N-1)/2,(N+1)/2);
                        result=result1.append(result2);
                    }
                    
                }
            }
        }
        return result;
    }
};