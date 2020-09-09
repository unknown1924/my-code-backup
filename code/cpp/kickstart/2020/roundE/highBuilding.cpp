#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        cout << "Case #" << i+1 <<": ";
        if(a+b-c > n or (a+b-c == 1 and n >= 2)){
            cout << "IMPOSSIBLE" << endl;
        }
        else{

            if(n == 1){
                cout << "1" << endl;
            }
            
            else if(n == 2){
                if(c == 2)
                    cout << "2 2" << endl;
                else if(a == 2)
                    cout << "1 2" << endl;
                else if(b == 2)
                    cout << "2 1" << endl;
                else
                    cout << "IMPOSSIBLE" << endl;
            }

            else {
                vector<int> ans;
                for(int i = 0; i < (a-c); i++)
                    ans.push_back(2);
                for(int i = 0; i < c; i++)
                    ans.push_back(3);
                for(int i =0; i < b-c; i++)
                    ans.push_back(2);
                int e = n - (a+b-c);
                if(e > 0)
                    ans.insert(ans.begin()+1, e, 1);

                int len = ans.size();
                for(int i = 0; i < len-1; i++)
                    cout<<ans[i]<<' ';
                cout << ans[len-1] << endl;

            }
        }
    }

}

