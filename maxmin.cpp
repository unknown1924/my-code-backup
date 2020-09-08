#include <bits/stdc++.h>
using namespace std;

int maxMin(int k, vector<int> a) {
    int n = a.size();
    vector<int> b(n-1);
    sort(a.begin(), a.end());
    int small = INT_MAX, big = INT_MIN;
    for(int i = 0; i < k; i++){
        small = min(small, a[i]);
        big = max(big, a[i]);
    }
    return big - small;
}

void print(int *m, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << *((m+i*n) + j)<<' ';
        }
        cout << endl;
    }
}

int maxmin(int k, vector<int> a){
    int n = a.size();
    int m[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[i][j] = a[i] - a[j];
        }
    }
    int globaldiff = 0;
    int localdiff = 0;
    print((int*)m, n);
    return 0;
}

int main(){
    //int n, k; cin >> n >> k;
    //vector<int> a(n);
    //for(int i = 0; i < n; i++)
        //cin >> a[i];
    //cout << maxMin(k, a) << endl;
    int n = 7, k = 3;
    vector<int> a{10, 100, 300, 200, 1000, 20, 30};
    cout << maxmin(k, a) << endl;
}
