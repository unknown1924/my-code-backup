    #include <bits/stdc++.h> 
    #include <ext/pb_ds/assoc_container.hpp> 
    #include <ext/pb_ds/tree_policy.hpp> 
    using namespace std; 
    #define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
    #define ll long long 
    #define ld long double 
    #define fi first 
    #define se second 
    #define mkp make_pair 
    #define pb push_back 
    #define eb emplace_back 
    #define pll pair<long long ,long long > 
    #define ppll pair < pll , pll > 
    #define debug(n1) cout << n1 << endl 
    #define FOR(j , k , n) for(ll i = j ; i <= n ; i += k) 
    #define rep(i , j , n) for(ll i = j ; i <= n ; i++) 
    #define per(i , j , n) for(ll i = j ; i >= n ; i--) 
    const ll N = 3e5 + 5; 
    const ll MAX = 3e5 + 5; 
    const ll M = 1e6 + 5; 
    const double mod = 1e18 + 7; 
void printMovingAvg(int n, vector<double> s, int d){
    int temp = d;
    double sum;
    for(int i = 0; i < d; i++){
        sum += s[i];
    }
    cout << sum <<' ';
    for(int i = d; i < n; i++){
        sum -= s[i-d];
        sum += s[i];
        cout << sum <<' ';
    }
    cout << endl;
}


    int main() { 
        //SPEED; 
        //cout.precision(8); 
        //cout << fixed; 
    vector<double> s{4.55,5.4,5.65,5.4,5.2,4.85,4.95,5.05,4.9,4.9,4.95};
    int n = 11;
    int a = 3, b = 5;
    for(int i =0; i < n; i++)
        cout << s[i] <<' ';
    cout << endl;
    printMovingAvg(n,s, a);
    cout << endl;
    printMovingAvg(n,s, b);

     
        return 0; 
    } 
