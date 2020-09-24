#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n;

void print(bool *dp, int n){
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
            cout << *(dp + i*n + j) << ' ';
            //if(j == n-1 and dp[i][j] == 1){
                //return a.substr(i, maxLen);
            //}
        }
        cout << endl;
    }
}

string longestPalindrome(string a) {
    n = a.length();
    bool dp[n][n];
    memset(dp, false, sizeof(dp));
    int maxLen =  1;
    for(int i = 0; i < n; i++)
        dp[i][i] = true;
    for(int i = 0 ; i < n-1; i++){
        if(a[i] == a[i+1]){
             dp[i][i+1] = true;
             maxLen = 2;
        }
        else dp[i][i+1] = false;
    }
    cout << maxLen << endl;
    print((bool*)dp, n);
    
    return "";
}

int main(){
    string s = "aaaabaaa";
    cout << longestPalindrome(s) << endl;
}
