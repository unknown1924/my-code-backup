#include <bits/stdc++.h>
using namespace std;

int main(){
    //vector<vector<int>> m{{7,3,2,}, 
                          //{4,1,5,},
                          //{6,8,9,}};
    vector<int> root{7,3,2,4,1,5,6,8,9};
    //vector<int> temp = root;
    int n = root.size();

    set<int> prime;
    prime.insert(3);
    prime.insert(5);
    prime.insert(7);
    prime.insert(11);
    prime.insert(13);
    prime.insert(17);

    //for(int e : root)
        //cout << e << ' ';

    queue<vector<int>> q;
    vector<vector<int>> valid;
    q.push(root);
    while(!q.empty()){
        vector<int> temp = q.front();   q.pop();
        valid.push_back(temp);
    }
    for(auto v : valid){
        for(int e : v)
            cout << e << ' ';
        cout << endl;
    }

}
