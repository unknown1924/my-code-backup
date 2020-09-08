#include <bits/stdc++.h>
using namespace std;

int atoi(string s){
    int len = s.length();
    int tens = 0;
    int num = 0;
    string n = "";
    bool negative = false;
    for(int i = 0; i < len; i++){
        if(s[i] == '-' or isdigit(s[i])){
            if(s[i] == '-')
                negative = true;
            else 
                n += s[i];
        }
        if(!isdigit(s[i]))
            break;
    }
    //cout << n << endl;
    for(int i = n.length()-1; i >= 0; i--){
        num += pow(10, tens)*(int)(n[i] - '0');
        tens += 1;
    }
    return negative ? -num : num;
}


int main(){
    string a ="42";
    string b ="words and 987";
    string s = "w   -42";
    cout << atoi(s) << endl;
}
