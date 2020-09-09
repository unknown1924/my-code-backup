#include<bits/stdc++.h>
#define ll long long
ll m = 1000000007;
using namespace std;

ll decodeString(char* s, int n){
	ll dp[n+1]={0};
	dp[0] = 1;
	dp[1] = 1;
	if(s[0] == '0')
		return 0;
	for(int i = 2; i <= n; i++){
		if(s[i-1] > '0')
			dp[i] = dp[i-1];
		
		if(s[i-2] == '1' or (s[i-2] == '2' and s[i-1] < '7'))
			dp[i] = (dp[i] + dp[i-2])%m;
	}
	return dp[n]%m;
}

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(0);
	cout.tie(0);
	char s[1000000];
	cin.getline(s, 1000000);
	cout << decodeString(s, strlen(s));
}

