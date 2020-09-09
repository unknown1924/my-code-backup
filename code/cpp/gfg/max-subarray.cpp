#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
/*
void printDP(int dp[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << dp[i][j]<< ' ';
        }
        cout << endl;
    }
}
*/
void kadansalgo(vector<int> a){
    int n = a.size();
    int localMax = a[0];
    int globalMax = a[0];
    
    for(int i = 1; i < n; i++){
        localMax = max(a[i], localMax + a[i]);
        globalMax = max(localMax, globalMax);
        cout <<a[i]<<' '<<localMax<<' '<<globalMax<<endl;
    }
    cout << localMax<< ' ' <<globalMax<< endl;
}

int main(){
    vector<int> a{-2,1,-3,4,-1,2,1,-5,4};
    int n = a.size();
    int dp[n+1][n+1];
    memset(dp, false, sizeof(dp));
    kadansalgo(a);

    //for(int i = 1; i <= n; ++i){
        //for(int j = 1; j <= n; ++j){

        //}
    //}
}
