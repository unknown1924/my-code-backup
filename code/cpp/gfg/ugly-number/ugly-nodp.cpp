// naive approach to ugly no brute force approach

#include <iostream>

using namespace std;

int maxDivisiblePow(int a, int b){
    while(a%b == 0){
        a = a/b;
    }
    return a;
}

int isUgly(int no){
    no = maxDivisiblePow(no, 2);
    no = maxDivisiblePow(no, 3);
    no = maxDivisiblePow(no, 5);

    return no == 1? 1:0;
}

int countUglyNo(int n){
    int i = 1;
    int count = 1;
    while(count < n){
        i++;
        if(isUgly(i)){
            ++count;
        }
    }
    return i;
}

int main(){
    int n = 10;
    cout << countUglyNo(n);
}
