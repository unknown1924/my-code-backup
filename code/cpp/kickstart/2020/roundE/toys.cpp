#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        vector<pair<int, int>> toy;

        int e = 0, r = 0;
        bool possible = true;
        bool inf = true;
        int maxtime = -1;
        
        for(int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            toy.push_back(make_pair(a, b));
            e += a; r += b;
        }

        if(n == 1)
            cout << toy[0].first << endl;
        else{
            for(int i = 0; i < n; i++){
                if(e - toy[i].first < toy[i].second){
                    // YES
                    //maxtime = max(maxtime, toy[i].first);
                    inf = false;
                }
            }

            if(inf){
                cout << "INDEFINITE" << endl;
            }
            else{
                    
            }
        }
    }
}
