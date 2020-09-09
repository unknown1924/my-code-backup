#include <bits/stdc++.h>
using namespace std;
void minCommonWindow(string a, string b){
    int start = INT_MAX, end = 0;
    int count = 0;

    map<char, int> m;

    for(char ch : b)
        ++m[ch];

    for(int i = 0; i < a.length(); i++){
        if(m[a[i]] == 1){
            start = min(start, i);
            end = max(end, i);
            m[a[i]] = 0;
            ++count;
        }
    }

    if(count == b.length())
        cout << start << ' ' << end << endl << "FOUND" << endl;
    else
        cout << "-1 -1\nNOT FOUND" << endl;
}

int main(){
    string a = "syuand";
    string b = "day";
    cout << "\nINPUT: " << endl << a <<" " << b << endl << "\nOUTPUT:\n";

    minCommonWindow(a, b);
}
