#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string s = "abcdapzfqh";
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";  

    int n = s.size(); 
    int m = sizeof(alpha);

    // DP table
    int dp[n+1][m+1];

    // Populate DP table with 0 for row 0 and col 0
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m ; j++){
            if(i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    // populate the DP table
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m ; j++){
            if(s[i-1] == alpha[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << dp[n][m] << endl;
    
}
