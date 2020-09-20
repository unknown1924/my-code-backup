#include <bits/stdc++.h>
using namespace std;

int cutRod(vector<int> cost, int n){
    vector<int> profit(n+1);
    for(int rodLen = 1; rodLen <= n; rodLen++){
        for(int cutLen = 1; cutLen <= rodLen; cutLen++){
            // choose the max of what i already have vs what i can get by cutting the rod at cutLen
            profit[rodLen] = max(profit[rodLen], cost[cutLen-1] + profit[rodLen - cutLen]);
        }
    }
    return profit[n];
}

int main(){
    //vector<int> a{1 , 5 , 8 , 9, 10, 17, 17, 20};  // ans 22
    vector<int> a{ 3  ,5  ,8 , 9 ,10 ,17 ,17 ,20};   // ans 24
    cout << cutRod(a, a.size()) << endl;
}
