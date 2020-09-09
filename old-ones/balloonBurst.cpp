#include <bits/stdc++.h>
using namespace std;

int maxScoreBurst(vector<int> a){
    int maxScore = 0;
    int n = a.size();

    a.insert(a.begin(), 1);
    a.push_back(1);

    vector<vector<int>> dp(n+2, vector<int>(n+2, 0));
    for(int w = 1; w <= n; w++){
        for(int Left = 1; Left <= n-w+1; Left++){
            int Right = Left+w-1;
            for(int i = Left; i <= Right; i++){
                dp[Left][Right] = max(dp[Left][Right], a[Left-1]*a[i]*a[Right+1] + dp[Left][i-1] + dp[i+1][Right]);
            }
        }
    }

    maxScore = dp[1][n]; 
    return maxScore;
}


int main(){
    vector<int> a{3,1,5,8};
    cout << maxScoreBurst(a) << endl;
}
