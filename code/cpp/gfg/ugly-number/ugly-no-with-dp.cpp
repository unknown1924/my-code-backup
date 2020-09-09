#include <iostream>
#include <math.h>
using namespace std;

int main(){
    //long long n = 15;
    long long n = 1692;
    long long a[n+1];
    a[0] = 1;
    long long i = 0;
    long long i2 = 0, nm2 = a[i2] * 2;
    long long i3 = 0, nm3 = a[i3] * 3;
    long long i5 = 0, nm5 = a[i5] * 5;

    for(i = 1; i<n; i++){
        long long min_val = min(nm2, min(nm3, nm5));
        a[i] = min_val;
        if(nm2 == min_val){
            ++i2; nm2 = a[i2] * 2;
        }
        if(nm3 == min_val){
            ++i3; nm3 = a[i3] * 3;
        }
       if(nm5 == min_val){ 
            ++i5; nm5 = a[i5] * 5;
        }
    }
    //for(long long j = 0 ; j<n; j++)
        //cout << a[j] <<' ' ;
    cout << a[n-1]<< endl;
    cout << endl;
}
