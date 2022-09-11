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
class Solution{
    private:
    int solution(vector<vector<char>>& words, vector<vector<bool>> &visited, string word, int index, int r, int c){
    
        visited[r][c]=true;
        int temp=0;
        
        if(words[r][c]!=word[index]){
            visited[r][c]=false;
            return 0;
        }
        else if(index == word.size()-1){
            visited[r][c]=false;
            return 1;
        }
        
        if(r<words.size()-1 && !visited[r+1][c]){
            temp+=solution(words, visited, word, index+1, r+1, c);
        }
            
        if(c<words[0].size()-1 && !visited[r][c+1])
            temp+=solution(words, visited, word, index+1, r, c+1);
        
        if(r>0 && !visited[r-1][c])
            temp+=solution(words, visited, word, index+1, r-1, c);
        
        if(c>0 && !visited[r][c-1])
            temp+=solution(words, visited, word, index+1, r, c-1);
        
        visited[r][c]=false;
        return temp;
    }
    public:
    int findOccurrence(vector<vector<char> > &mat, string target){
        int r=mat.size();
        int c=mat[0].size();
        vector<vector<bool>> visited(r, vector<bool> (c, false));
        
        int sum=0;
        
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                sum+=solution(mat, visited, target, 0, i, j);
            }
        }
        
        return sum;
    }
};