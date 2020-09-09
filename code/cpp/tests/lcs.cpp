#include <iostream>
using namespace std;

int main(){
    int n = 6;
    char s1[n] = "ABCDGH";
    char s2[n] = "AEDFHR";
    int dp[n+1][n+1];
    for(int i = 0; i <= n; i++){
        dp[0][i] = 0;
        dp[i][0] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(s1[j-1] == s2[i-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    for(int i = 0; i<= n; i++){
        for(int j = 0; j <= n; j++){
            cout << dp[i][j] << " | ";
        }
        cout << endl << "_ | _ | _ | _ | _ | _ | _ | " << endl;
    }
}
