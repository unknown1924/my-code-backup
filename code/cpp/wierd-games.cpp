#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n =8;
vector<int>dp(n+1,0);
        dp[0]=djgup[1]=1;
        for(int i=2;i*i<=n;i++){
            dp[i*i]=1;
        }
        for(int i=2;i<=n;i++){
            if(dp[i]==1)continue;
            else if(dp[i]==0){
                int f=0;
                for(int j=1;j*j<=i;j++){
                    int rem=i-(j*j);
                    if(dp[rem]==1)continue;
                    else{
                        f=1;
                        dp[i]=1;
                        break;
                    }
                }
                if(f==0)dp[i]=0;
            }
        }
        cout<<dp[n];
}