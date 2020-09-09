#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
    //string s = "babad";
    //string s = "xabba";
    string s = "abcda";
    int n = s.size();
    int dp[n][n];
    memset(dp,false,sizeof(dp));
    
    for(int i = n-1; i >= 0; --i){
        for(int j = i; j < n; ++j){
            if(i == j)
                dp[i][j] = 1;
            else if(i < j && s[i] == s[j]){
                if(j == i+1){
                    dp[i][j] = 1;
                }
                else
                    dp[i][j] = dp[i+1][j-1];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << dp[i][j] << ' ';
        }cout << endl;
    }
    int maxlen = 0;
    string p = "";
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(dp[i][j] == 1){
                if(s.substr(i, j-i+1).size() >= maxlen){
                    maxlen = s.substr(i, j-i+1).size() ; 
                    p = s.substr(i, j-i+1) ;
                }
                cout << s.substr(i, j-i+1) << endl;
                cout << i << ' ' << j << endl;
            }
        }
        cout << endl;
    }
    cout << p << endl;
}
