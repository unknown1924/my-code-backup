#include <iostream>
#include <map>
#include <cstring>
using namespace std;
long long countStringDecodingRecursive(string s, int n){
    int ways = 0;
    if(n == 0 or n == 1)
        return 1;
    if(s[0] == '0')
        return 0;
    if(s[n-1] > '0'){
        ways = countStringDecodingRecursive(s, n-1);
    }
    if((s[n-2] == '1' or s[n-2] == '2') and s[n-1] < '7'){
        ways += countStringDecodingRecursive(s, n-2);
    }
    return ways;
}
int countDecodingDP(char *digits, int n)
{
	// A table to store results of subproblems
	int count[n+1];
	count[0] = 1;
	count[1] = 1;
	//for base condition "01123" should return 0
	if(digits[0]=='0')
		return 0;
	for (int i = 2; i <= n; i++)
	{
		count[i] = 0;

		// If the last digit is not 0,
		// then last digit must add to the number of words
        if (digits[i-1] > '0'){
			count[i] = count[i-1];
            //cout <<digits[i-1]<<' '<<count[i-1]<<' '<<count[i] << endl;
        }

		// If second last digit is smaller
		// than 2 and last digit is smaller than 7,
		// then last two digits form a valid character
		if (digits[i-2] == '1' || (digits[i-2] == '2' && digits[i-1] < '7') ){
			count[i] += count[i-2];
            //cout <<digits[i-2]<<' '<<digits[i-1]<<' '<<count[i-2]<<' '<<count[i] << endl;
        }
        cout <<endl<<"--------------------------------------"<<endl;
	}
    for(auto x: count)
        cout << x <<' ';
    cout << endl;
	return count[n];
}

long long countStringDecodingDp(char* s, int n){
    long long dp[n+1]={0};
    dp[0] = 1;
    dp[1] = 1;
    if(s[0] == '0')
        return 0;
    for(int i = 2; i <= n; i++){
        dp[i] = 0;
        if(s[i-1] > '0'){
            dp[i] = dp[i-1];
        }
        if(s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
            dp[i] += dp[i-2];
    }
    for(int k = 0; k < n+1; k++)
        cout << dp[k] <<' ';

    cout << endl;
    return dp[n];
}

int main(){
    char s[] = "1234";
    char sa[] = "111199";
    //cout << countStringDecodingDp(s, strlen(s)) << endl;
    cout << countDecodingDP(sa, strlen(sa)) << endl;
}
