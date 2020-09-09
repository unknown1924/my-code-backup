#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    int n = 10;
    set <long long> s;
    s.insert(1);
    auto it = s.begin(); 
    vector <long long> v;

    while(v.size() < 10001){
        long long x = *it;
        v.push_back(x);

        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);

        ++it;
    }
    cout << v[n-1] << endl << endl;

}

