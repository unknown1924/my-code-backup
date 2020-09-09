#include <bits/stdc++.h>
using namespace std;
// Bit manipulation
int maxWeaponsLeft(vector<string> s){
    int size = s.size();
    vector<bitset<10>> b;
    for(auto w:s){
        bitset<10> temp(w); 
        b.push_back(temp);
    }
    for(int i = 1; i < size; i++){
        b[0] ^= b[i];
    }
    return b[0].count();
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> s;
        for(int i = 0; i < n; i++){
            string k; cin >> k; s.push_back(k);
        }
        cout << maxWeaponsLeft(s) << endl;
    }
}
