#include <bits/stdc++.h>
using namespace std;

int findMissing(vector<int> a){
    int n = a.size();
    set<int> s;
    for(int e : a)
        s.insert(e);
    nth_element(a.begin(), a.begin(), a.end());
    int lower = a[0];
    for(int i = 0; i < n; i++){
        if(s.find(lower+1) == s.end())
            return lower+1;
        ++lower;
    }
    return -1;
}

int main(){
    //vector<int> a{1, 0, -1, 3};
    vector<int> a{3,1,2,5};     // ans 4
    cout << findMissing(a) << endl;
}
