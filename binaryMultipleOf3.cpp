#include <bits/stdc++.h>
using namespace std;

bool divBy3(string s){
    int n = s.length();
    char state = '0';
    for (int i = 0; i < n; i++) { 
  
        // storing binary digit 
        char digit = s[i]; 
  
        if(state == '0'){
            if(digit == '1')
                state = '1';
        }
        else if(state == '1'){
            if(digit == '0')
                state = '2';
            else
                state = '0';
        }
        else if(state == '2'){
            if(digit == '0')
                state = '1';
        }
    } 
  
    if (state == '0') 
        return true; 
    return false; 
}

int main(){
    string s = "10101";
    int n = 5;
    char c[n];
    for(int i = 0; i < n; i++){ c[i] = s[i]; }
    cout << divBy3(s) << endl;
}
