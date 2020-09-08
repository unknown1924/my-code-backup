#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    n = 4;
    long long a[n]{1, 2,3,4};
    int x = ceil((float)n/2) + 1;
    int y = n/2 -1;
    cout << x <<' '<<y << endl;
    long long sum = 0;
    for(int i = 0; i < x; i++){
        long long pro = 1;
        for(int j= i; j <= y+i; j++){
            //cout << a[j] <<' ';
            pro *= a[j];
        }
        sum += pro;
        cout<<endl;
    }
    cout << endl << sum << endl;
}
