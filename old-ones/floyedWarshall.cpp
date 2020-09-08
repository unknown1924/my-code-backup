#include <bits/stdc++.h>
using namespace std;
#define INF 1000000007
vector<vector<int>> floyedWarshall(vector<vector<int>> a){
    int n = a.size();
    for(int i = 0; i < n; i++){
        for(int x = 0; x < n; x++){
            for(int y = 0; y < n; y++){
                if(x != y and x != i and y != i)
                    a[x][y] = min(a[x][y], a[x][i] + a[i][y]);
            }
        }
    }
    return a;
}

void printVector(vector<vector<int>> a){
    cout << endl;
    for(auto x:a){
        for(int y:x)
            cout << y <<"   ";
        cout << endl << endl;
    }
}

int main(){
    //vector<vector<int>> a{{0, 1, 43}, {1, 0, 6}, {INF, INF, 0}};
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<vector<int>> a;

        for(int i = 0; i < n; i++){
            vector<int> k;
            for(int j = 0; j < n; j++){
                int temp; cin >> temp;
                k.push_back(temp);
            }
            a.push_back(k);
        }

        vector<vector<int>> b = floyedWarshall(a);
        printVector(b);

    }
}
