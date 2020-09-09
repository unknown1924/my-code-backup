#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int maxTransacTionReq(vector<int> a){
    int res = 0; int n = a.size();
    int t[n+1][n+1] = {{0}};
    int maxprev = 0;
    memset(t, 0, sizeof(t));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout << t[i][j] << ' ' ;
        }
        cout<< endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int m = 0; m < j; m++){
                maxprev = max(maxprev, a[j]-a[m] + t[i-1][m]);
            }
            t[i][j] = max(t[i][j-1], maxprev);
        }
        cout<< endl;
    }
    cout << endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout << t[i][j] << ' ' ;
        }
        cout<< endl;
    }
    return res;
}
int maxProfit(vector<int> a){
{
    int res = 0; int n = a.size();
    int t[n+1][n+1] = {{0}};
    int maxprev = 0;
    memset(t, 0, sizeof(t));
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout << t[i][j] << ' ' ;
        }
        cout<< endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            t[i][j] = max(t[i][j-1],t[i][j]*(i+1) - maxprev);
        }
        cout<< endl;
    }
    cout << endl;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            cout << t[i][j] << ' ' ;
        }
        cout<< endl;
    }
    return res;
}
}

int main(){
    vector<int> a{1,3,1,2};
    vector<int> b{1,2,100};
    cout << "\nThe max number of Transactions req is: " << endl;
    //cout << maxTransacTionReq(a) << endl;
    cout << "\nThe max profit made is: " << endl;
    cout << maxProfit(a) << endl;
}
