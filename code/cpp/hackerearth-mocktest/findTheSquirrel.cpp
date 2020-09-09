#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;
int slightlyEasierOne(int a[], int n){
    int x = a[0];
    int y = a[1];
    for(int i = 2; i < n; i++){
        if(x == y and x != a[i])
            return a[i];
        else if(x == a[i] and y != a[i])
            return y;
        else if(y == a[i] and x != a[i])
            return x;
    }
    return -1;
}

int comparingAdjacentElements(int a[], int n){
    int x, y;
    for(int i = 2; i < n; i++){
         x = a[i-1];
         y = a[i-2];
         if(a[i] == x and x != y){
            return y;
         }
         else if(a[i] == y and y != x){
             return x;
         }
         else if(a[i] != x and a[i] != y){
             return a[i];
         }
    }
    return 0;
}
int mapComparing(int a[], int n){
    int ret = 0;
    map<int, int> m;
    for(int i =0; i < n; i++)
        ++m[a[i]];
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second == 1)
            ret = it->second;
    }
    return ret;
}

int main(){
    int n = 1000000;
    int a[n];
    for(int i = 0 ; i < n-1; i++)
        a[i] = 2;
    a[999] = 5;
    auto start = high_resolution_clock::now();
    //cout << comparingAdjacentElements(a, n) << endl;
    //cout << mapComparing(a, n) << endl;
    cout << slightlyEasierOne(a, n) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;

}
