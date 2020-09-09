#include <iostream>
#include <cstring>
using namespace std;

string lps(string s){
    int n = s.size();
    int maxlen = 0, L = 0, R = 0;
    bool dp[n][n];
    memset(dp, false, sizeof(dp));
    for(int i = 0; i < n; i++) dp[i][i] = true;
    for(int i = 0; i < n-1; i++){
        if(s[i] == s[i+1])
            dp[i][i+1] = true;
    }
    for(int i = n-3; i >= 0; --i){
        for(int j = i+2; j < n; ++j){
            if(s[i] == s[j])
                dp[i][j] = dp[i+1][j-1];
            //if(j-i >= maxlen && dp[i][j] == 1){
                //cout << i <<" " << j << ' '<< maxlen << endl;
                //maxlen = j-i;
                //L = i; R = j;
            //}
        }
    }
       for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(j-i > maxlen && dp[i][j] == true){
                    cout << i << ' ' << j << ' ' << maxlen << endl;
                    maxlen = j-i;
                    L = i; R = j;
                }
            }
        }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << dp[i][j] << ' ';
        }
        cout << endl;
    }
    cout << L << ' ' << R << endl;
    return s.substr(L,R-L+1);
}

int main(){
    //string s = "aaaabbaa";
    string s = "cbbd";
    cout << lps(s) << endl;
}
