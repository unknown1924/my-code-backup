#include<bits/stdc++.h>
using namespace std;
bool add(vector<int>& a, int i){
    if(i < 0)
        return true;
    else{
        if(a[i] == 9){
            a[i] = 0;
            add(a, i-1);
        }
        else
            a[i] += 1;
    }
    return false;
}
vector<int> addOne(vector<int>& a){
    int n = a.size();
    bool status = add(a, n-1);
    if(status){
        a.insert(a.begin(), 1);
    }
    return a;
}

int main(){
    //vector<int> a(3, 9);
    vector<int> a{9, 8,9};
    vector<int> b = addOne(a);
    //cout << b.size();
    if(b[0] == 0)
        b.insert(b.begin(), 1);
    for(int i:b)
        cout <<i<<' ';
}
