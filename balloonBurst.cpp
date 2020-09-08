#include <bits/stdc++.h>
using namespace std;

vector<int> modified(vector<int> a, int i){
    vector<int> ret;
    for(int e:a){
        if(e != i)
            ret.push_back(e);
    }
    return ret;
}
int burst(int start, int end, vector<int> a){
    int n = a.size();
    if(n <= 0)  return 0;
    if(n == 1)  return a[0];
    if(n == 2)  return a[0]*a[1] + max(a[0], a[1]);
    int sum = 0;
    //for(int  i = 0; i < n; i++){
        //sum = max(sum, burst(modified(a, i)));
    //}
    for(int  i = start; i <= end; i++){
        sum = max(sum, a[i]*burst(0, i-1, a)*burst(i+1, n, a));
    }
    return sum;
}

int dpburst(vector<int> a){
    int n = a.size();
    int dp[n-2] = {0};
    return 0;
}

int main(){
    vector<int> a{3,1,5,8};
    cout << burst(0, 3, a) << endl;
}
