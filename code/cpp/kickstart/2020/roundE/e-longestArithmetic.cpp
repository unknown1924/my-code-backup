#include <bits/stdc++.h>
using namespace std;

// my approach not working all test cases   
int longestArithmetic(int a[], int n){
    if(n <2)
        return 0;
    int diff =(a[1] - a[0]);
    int localMax = 2, globalMax = INT_MIN;
   for(int i = 2; i < n;){
        if((a[i] - a[i-1]) == diff){
            localMax += 1;
            globalMax = max(globalMax, localMax);
        }
        else{
            diff = (a[i] - a[i-1]);
            localMax = 2; 
        }
    }
    return globalMax;
}

int longestArithemeticSubarray(int a[], int n){
    int maxlen = 0;
    for(int i = 0; i < n-1; i++){
        int j = i;
        int diff = a[i+1] - a[i];
        while(j < n-1 and a[j+1] - a[j] == diff)
            j++;
        int maxj = j;
        maxlen = max(maxlen, maxj - i + 1);
        i = max(i+1, j);
    }
    return maxlen;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i] ;
        cout << "Case #"<< i+1 <<": "<< longestArithemeticSubarray(a, n) << endl;
    }
}
