#include <cstring>
#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        //int n=11, m=1, q=2, sum=0;
        int n, m, q, sum=0;
        cin >> n >> m >> q;
        //vector<int> M{8};
        vector<int> M;
        //vector<int> Q{2,3};
        vector<int> Q;
        for(int i = 0 ; i < m; i++){
            int temp; cin >> temp; M.push_back(temp);
        }
        for(int i = 0 ; i < q; i++){
            int temp; cin >> temp; Q.push_back(temp);
        }
        vector<bool> bad(n+1);
        vector<ll> ans(n+1, -1);
        //for(int i =0; i < m; i++){
            //bad[i] = true;
        //}
        for(int& x : M)
            bad[x] = true;
        for(int i = 0; i < q; i++){
            ans[i] = 0;
            for(int j = Q[i]; j <= n; j += Q[i]){
                if(!bad[j]){
                    ans[i] += 1;
                }
            }
            sum += ans[i];
        }
        cout << sum << endl;
        //cout << n << m << q;
    }
}
