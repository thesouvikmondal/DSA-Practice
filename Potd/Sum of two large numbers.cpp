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
class Solution {
    public:
   string findSum(string X, string Y) {
        int k = 0;
        if (X.size() >= Y.size()) {
            int i = X.size() - 1;
            int j = Y.size() - 1;
            while (j >= 0) {
                if (((Y[j] - '0') + (X[i] - '0') + k) >= 10) {
                    X[i] = (((Y[j] - '0') + (X[i] - '0') + k) % 10) + '0';
                    k = 1;
                }
                else {
                    X[i] = (((Y[j] - '0') + (X[i] - '0') + k) % 10) + '0';
                    k = 0;
                }
                j--;
                i--;
            }
            while (i >= 0) {
                if (((X[i] - '0') + k) >= 10) {
                    X[i] = (((X[i] - '0') + k) % 10) + '0';
                    k = 1;
                }
                else {
                    X[i] = (((X[i] - '0') + k) % 10) + '0';
                    k = 0;
                }
                i--;
            }
            if (k == 1) {
                X = '1' + X;
            }
            i = 0;
            while (i < X.size() and X[i] == '0') {
                i++;
            }
            if (i == X.size()) {
                return "0";
            }
            return X.substr(i, X.size() - i);
        }
        else {
            int i = Y.size() - 1;
            int j = X.size() - 1;
            while (j >= 0) {
                if (((Y[i] - '0') + (X[j] - '0') + k) >= 10) {
                    Y[i] = (((Y[i] - '0') + (X[j] - '0') + k) % 10) + '0';
                    k = 1;
                }
                else {
                    Y[i] = (((Y[i] - '0') + (X[j] - '0') + k) % 10) + '0';
                    k = 0;
                }
                j--;
                i--;
            }
            while (i >= 0) {
                if (((Y[i] - '0') + k) >= 10) {
                    Y[i] = (((Y[i] - '0') + k) % 10) + '0';
                    k = 1;
                }
                else {
                    Y[i] = (((Y[i] - '0') + k) % 10) + '0';
                    k = 0;
                }
                i--;
            }
            if (k == 1) {
                Y = '1' + Y;
            }
            i = 0;
            while (i < Y.size() and Y[i] == '0') {
                i++;
            }
            if (i == Y.size()) {
                return "0";
            }
            return Y.substr(i, Y.size() - i);
        }
        return "";
    }

};