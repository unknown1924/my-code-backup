#include <iostream>
using namespace std;

int m(int s, int op, int n){
    if(s >= n) return 0;
    if(s < n){
        if(op){
            return 1 + max(m(s+1, 1, n), m(s+1, 0,n));
        }
        else
            return 1 + max(m(s*2, 1, n), m(s*2, 0, n));
    }
return 0;
}

int main(){
    int n = 8;
    int s = 0; 
    cout << max( m(s, 1, n), m(s, 0, n));
}
