#include <iostream>
#include <climits>
#include <algorithm>
#include <cstring>
using namespace std;

int maxsubsq(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0)
            sum += a[i];
    }
    if(sum <= 0){
        return *max_element(a, a+n);
    }
    return sum;
}
int maxsumsubsq(int a[], int n){
    int dp[n+1][n+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=n; j++){
            if(i == 0){
                //dp[i][j] = 
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = i; j<=n; j++){
           dp[i][j] = max(dp[i-1][j-1] + dp[i][j], dp[i-1][j-1] + dp[i-1][j]);
        }
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j<=n; j++){
           cout << dp[i][j] <<' ';
        }
        cout << endl;
    }
    return dp[n][n];
}
int maxsumsubarr(int a[], int n){
    // here global and local are exchanged oops sorry 
    int global=-10001; int local =-10002;
    //cout << "\nmax sum subarray: "<<endl;
    for(int i = 0 ; i < n; i++){
        //cout << global << ' ' << a[i]<<' '<< global+a[i]<< endl;
        global = max(a[i], global+a[i]);
        local = max(local, global);
    }
    return local;
}

void maxsubarray(int a[], int n){
    //cout <<maxsumsubarr(a,n) <<' '<< maxsumsubsq(a,n) << endl;
    cout <<maxsumsubarr(a,n) <<' '<< maxsubsq(a,n) << endl;
}

int main(){
    int b[]= {2,-1,2,3,4,-5};
    int a[]= {-2,-3,-1,-4,-6};
    int n = 5;
    //cout << maxsumsubsq(a, n);
    maxsubarray(a, n);
    maxsubarray(b, 6);
}

