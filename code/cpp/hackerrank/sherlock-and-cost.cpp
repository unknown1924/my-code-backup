#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    vector<int> B{10,1,10,1,10};
    int n = B.size();
    // cout << n;

    int dp[n][2];
    // this is like brute force approach with memoization
    // taking two arrays dp[i][0] and dp[i][1] 
    // both array store optimal value for choosing either 1 or B[i]
    // at the end we do max of either of the last value of each array

    dp[0][0] = 0; dp [0][1] = 0;
    for(int i = 1; i < n ; i++){

        dp[i][1] = max(dp[i-1][1] + abs(B[i] - B[i-1]), dp[i-1][0] + abs(B[i] - 1));
        dp[i][0] = max(dp[i-1][1] + abs(1 - B[i-1]), dp[i-1][0] + abs(1 - 1));

    }
    cout << endl << max(dp[n-1][0], dp[n-1][1]);
}
