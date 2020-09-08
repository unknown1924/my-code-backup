#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    stack<string> sen;
    string reversed = "";
    string w = "";
    int i = 0;
    do{
        w += s[i];
        if(s[i] == '.' or s[i] == '\0'){
            sen.push(w);
            w = "";
        }
        ++i;
    }while(s[i] != '\0');
    while(!sen.empty()){
        reversed += sen.top();
        sen.pop();
    }
    return reversed.substr(0, reversed.length()-1);
}

int main()
 {
     string s = "i.like.this.program.very.much";
     cout << reverseWords(s+'.') << endl;
}
