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
#include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


int dp[200][200];
int a[200];
int maxPalindrome(Node *head)
{
    //Your code here
    Node *curr = head;
    int n = 0;
    while(curr) {
        a[n] = curr->data;
        curr = curr->next;
        n++;
    }
    int res=0;
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            dp[i][j]=0;
            if(g==0) dp[i][j]=1;
            else if(a[i]==a[j]){
                if(g==1) dp[i][j]=1;
                else dp[i][j]=dp[i+1][j-1];
            }
            if(dp[i][j]==1){
                res=max(res,g+1);
            }
        }
    }
    return res;
}