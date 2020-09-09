#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string isDualString(string s){
    map<char, int> m;
    int count = 0;
    for(int i = 0 ; i < s.length(); i++){
        m[s[i]] += 1;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        int a = it->second;
        if(a == 1 and s.length() < 2)
            return "No";
        else if(s.length() == m.size())
            return "No";
        else if(s.length() > 1)
            return "Yes";
    }
    return "Yes";
}


int main() {
    int t; cin >>t;
    while(t--){
        string s; cin >> s;
        cout << isDualString(s) << endl;
    }
    return 0;
}

