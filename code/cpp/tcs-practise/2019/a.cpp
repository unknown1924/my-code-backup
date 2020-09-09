#include <bits/stdc++.h>
using namespace std;
int countOccurrence(int i, int* p){
    return p[i];
}

int main(){
    string s = "abacsddaa"; int n = s.size();
    int q[2] = {9, 3}; int m = sizeof(q)/sizeof(q[0]);
    map<char, int> lookup;
    int p[n+1]={0};
    for(int i = 1; i <= n; i++){
        p[i] = lookup[s[i-1]];
        lookup[s[i-1]] += 1;
    }
    cout <<"\nFinal state of p: "<<endl;
    for(auto x: p)
        cout << x<<' ';
    cout <<"\nFinal state of hashmap: "<<endl;
    for(auto it = lookup.begin(); it != lookup.end(); it++){
        cout << it->first <<':'<<it->second<<endl;
    }
    cout <<"\nOccurrence: "<<endl;
    for(int i = 0; i < 2; i++){
        cout <<"\nFor: "<<q[i]<<" count: "<< countOccurrence(q[i], p) << endl;
    }
}

