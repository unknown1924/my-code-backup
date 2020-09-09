#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string s){
    int n = s.length();
    stack<int> open, star;
    for(int i = 0; i < n; i++){
        if(s[i] =='('){
            open.push(i);
        }

        else if(s[i] == '*'){
            star.push(i);
        }
        else{
            if(open.empty() and star.empty())
                return false;
            //if(open.empty()){
                //return false;
            //}
            if(!open.empty()){
                open.pop();
            }
            else if(!star.empty())
                star.pop();
        }
    }
    if(!open.empty()){
        int top = star.top();
        int k = open.top();
        if(k > top)
            return false;
    }
    return true;
}
bool isValidRecursive(const string s, int pos, int l, int r){
    //if(l < r)
        //return false;
    if(pos < 0)
        return l == r;
    if(s[pos] == '(')
        return isValidRecursive(s, pos-1, l+1, r);
    else if(s[pos] == ')')
        return isValidRecursive(s, pos-1, l, r+1);
    else
        return isValidRecursive(s, pos-1, l, r) or isValidRecursive(s, pos-1, l+1, r) or isValidRecursive(s, pos-1, l, r+1);
}

int main(){
    //string s = "()";
    //string s ="(*)))";
    string s = "*()(())*()(()()((()(()()*)(*(())((((((((()*)(()(*)";
    //cout << isValidParenthesis(s) << endl;
    cout << isValidRecursive(s, s.length()-1, 0, 0) << endl;
}
