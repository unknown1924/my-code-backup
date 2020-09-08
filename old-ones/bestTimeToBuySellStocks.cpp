#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> a){
    int n = a.size();
    int p[n+1] = {0};
    bool bought = true;
    for(int i = 2; i <= n; i++){
        bought = true;
        if(bought){
            for(int j = 0; j < i; j++){
                p[i] = max(p[i], a[i] - a[j]);
                bought = false;
            }
        }
        cout << p[i] <<' ';
    }
    cout << endl;
    return p[n];
}
int profit(vector<int> a){
    int n = a.size();
    int i = 1, j = 0;
    int sum = 0;

    while(j < i){
        sum = max(sum, a[i] - a[j]);
    }
}

int main(){
    vector<int> stock{3,3,5,0,0,3,1,4};
    cout << maxProfit(stock);
}
