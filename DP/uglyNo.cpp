#include <bits/stdc++.h>
typedef unsigned us;
using namespace std;

int nextUglyNo(int n){
    us ugly[n];
    ugly[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    int m2 = 2, m3 = 3, m5 = 5;

    int nextUgly;
    for(int i = 1; i < n; i++){
        nextUgly = min(m2, min(m3, m5));
        ugly[i] = nextUgly;
        if(nextUgly == m2){
            ++i2;
            m2 = ugly[i2]*2;
        }
        if(nextUgly == m3){
            ++i3;
            m3 = ugly[i3]*3;
        }
        if(nextUgly == m5){
            ++i5;
            m5 = ugly[i5]*5;
        }
    }
    return nextUgly;
}

int main(){
    int n = 150;
    cout << nextUglyNo(n) << endl;
}
