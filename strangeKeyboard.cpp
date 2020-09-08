#include <bits/stdc++.h>
using namespace std;

string correct(string s){
    int n = s.length();
    string r = "";
    string temp = "";
    set<char> symbols{'<', '>', '*', '#'};
    bool numlock = true;

    for(int i = 0; i < n; i++){
        if(symbols.find(s[i]) != symbols.end()){
            if(s[i] == '<'){
                 ++i;
                 while(symbols.find(s[i]) == symbols.end() and i < n){
                    temp += s[i];
                    ++i;
                 }
                 r = temp + r;
                 temp = "";
            }
            if(s[i] == '>'){
                ++i;
                while(symbols.find(s[i]) == symbols.end() and i < n){
                    temp += s[i];
                    ++i;
                }
                r = r + temp;
                temp = "";
            }
            if(s[i] == '*'){
                r = r.substr(0, r.length()-1);
            }
            if(s[i] == '#'){
                temp = "";
                numlock = !numlock;
                while()
                 ++i;
                 while(symbols.find(s[i]) == symbols.end() and i < n and isdigit(s[i]) and numlock){
                    temp += s[i];
                    ++i;
                 }
                 r = temp + r;
                 temp = "";

            }

        }
        else {
            r += s[i];
        }
    }

    return r;
}

int main(){
    string s = "HE*<LL>O";
    string op = correct(s);
    cout << op << endl;
}
