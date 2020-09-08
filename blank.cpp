#include <bits/stdc++.h>
using namespace std;


string multiply(string a, string b){
    int alen = a.length();
    int blen = b.length();

    string res = "";

    char ch = '1';
    for(int i = blen-1; i >= 0; i--){
        string carry = "";
        ch = char((int)(a[i] - '0')*(int)(b[i] - '0'));
    }
        cout << ch <<endl;
    return "0";
}

int main(){
    string x = "23";
    string y = "3";
    string a, b;

    if(x.length() > y.length()){
        a = x; b = y;
    }
    else {
        a = y; b = x;
    }

    string res = multiply(a, b);
}
