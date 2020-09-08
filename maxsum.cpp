#include <bits/stdc++.h>
using namespace std;

vector<long> maxsum(int N, vector<int> op){
    vector<long> res;
    int sum = N*(N+1)/2;
    for(int x:op){
        if(x > N){
            sum -= N;
            sum += x;
        }
    }
}

int main(){
    int n = 3, m = 2;
    vector<int> op{4,2};
    vector<long> res = maxsum(n, op);
    for(auto x:res)
        cout << x <<' ';
}
