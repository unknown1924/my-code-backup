#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "abcabca";
    int len = s.size();
    int count = 0;
    // Greedy Soln
    //while(len){
        //if(len%2){
            //s = s.substr(0, len-1);
            //++count;  --len;
        //}
        //else {
            //if(s.substr(0, len/2) == s.substr(len/2, len/2)){
                //s = s.substr(0, len/2);
                //++count;   len /= 2;
            //}
            //else {
                //s = s.substr(0, len-2);
                //count += 2;   len -= 2;
            //}
        //}
    //}
    
    // DP Soln
    int dp[2][len+1];
    dp[0][0] = 0; dp[1][0] = 0;
    int i = 1;
    for(i = 1; i <= len; i++){
        dp[0][i] = min()
    }
    cout << count << endl;
}
