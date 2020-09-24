#include <bits/stdc++.h>
using namespace std;

int maxCut(int n, vector<int> cuts){

    int profit[n+1];
    memset(profit, -1, sizeof(profit));

    // profit at n=0 is 0
    profit[0] = 0;

    for(int i = 0; i < n; i++){
        // if -1 then impossible to cut
        if(profit[i] == -1) continue;
        // if not -1 then try cutting
        for(int cut : cuts){
            if(i + cut <= n)
                // choose max of 1+profit at [i] OR profit at [i+cut]
                profit[i + cut] = max(profit[i + cut], profit[i] + 1);
        }
    }
    return profit[n];
}

int main(){
    //int n = 4;
    //vector<int> cuts{2, 1, 1};
    int n = 100;
    vector<int> cuts{23, 15, 50};
    cout << maxCut(n, cuts) << endl;
}
