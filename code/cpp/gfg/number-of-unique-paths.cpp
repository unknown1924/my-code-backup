#include <iostream>
using namespace std;

int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
} 
int main(){
    int n = 12, m = 3;
    //int n = 3, m = 4;
    //cout << fact(m+n)/(fact(m) * fact(n));
    cout << fact(m+n-2)/(fact(m-1) * fact(n-1));
    //int dp[n+1][m+1];
    //for(int i = 0; i <= n; i++){
        //for(int j = 0; j <= m; j++){
            //if(i == 0 || j == 0)
                //dp[i][j] = 1;
        //}
    //}

    //for(int i = 1; i <= n; i++){
        //for(int j = 1; j <= m; j++){
            //dp[i][j] = dp[i-1][j] + dp[i][j-1];
        //}
    //}
    //cout << dp[n-1][m-1] << endl;
}
