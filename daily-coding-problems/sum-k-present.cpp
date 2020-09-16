#include <bits/stdc++.h>
using namespace std;

bool isSumKPresent(vector<int> a, int sum){
    set<int> lookup;
    for(int e : a){
        if(!lookup.empty() and lookup.find(sum-e) != lookup.end())
            return true;
        lookup.insert(e);
    }
    return false;
}

int main(){
    vector<int> v{10, 15, 3, 7};
    cout << isSumKPresent(v, 100) << endl;
}
