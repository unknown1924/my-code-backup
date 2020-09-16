#include <bits/stdc++.h>
using namespace std;

int bitonic(vector<int> a){
    int n = a.size();
    int dp[n+1];
    for(int i = 0; i <= n; i++)
        dp[i] = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] > a[j] and dp[i] < dp[j] + 1)
                dp[i] = dp[j] + 1;
        }
    }
    //int *x = new int[n+1];
    //x = dp;

    int ldp[n+1];
    for(int i = 0; i <= n; i++)
        ldp[i] = 1;

    //for(int i = n-2; i >= 0; i--){
        //for(int j = n-1; j > i; j--){
            //if(a[i] > a[j] and dp[i] < dp[j]+1)
                //dp[i] = dp[j] + 1;
        //}
    //}

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            if(a[i] < a[j] and ldp[i] < ldp[j] + 1)
                ldp[i] = ldp[j] + 1;
        }
    }

    //int *y = new int[n+1];
    //y = dp;

    int maxval = 0;
    for(int i = 0;i <= n; i++)
        maxval = max(maxval, dp[i] + ldp[i] -1);
    return maxval;

}

int main(){
    vector<int> a{6, 1, 3,5, 4,7};
    //vector<int> a{0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    //vector<int> a{80, 60, 30, 40, 20, 10};
    for(int e : a) cout << e << ' ';
    cout << endl;
    cout << bitonic(a) << endl;
}
