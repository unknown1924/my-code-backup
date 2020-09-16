#include <bits/stdc++.h>
using namespace std;

void markVisitedLand(vector<vector<int>>& mat, int N, int M ,int i, int j){
    // boundary checks
    if((i < 0 or j < 0) or (i >= N or j >= M)){
        return;
    }

    // DFS on neighbours
    mat[i][j] = 2;
    if(j+1 < M and mat[i][j+1] == 1){
            markVisitedLand(mat, N, M, i, j+1);
    }
    
    if(j-1 >= 0 and mat[i][j-1] == 1){
            markVisitedLand(mat, N, M, i, j-1);
    }
    
    if(i-1 >= 0 and mat[i-1][j] == 1){
            markVisitedLand(mat, N, M, i-1, j);
    }
    
    if(i+1 < N and mat[i+1][j] == 1){
            markVisitedLand(mat, N, M, i+1, j);
    }
    
    //if(i+1 < N && j+1 < M and mat[i+1][j+1] == 1){
            //markVisitedLand(mat, N, M, i+1, j+1);
    //}
    
    //if(i+1 < N && j-1 >= 0 and mat[i+1][j-1] == 1){
            //markVisitedLand(mat, N, M, i+1, j-1);
    //}
    
    //if(i-1 >= 0 && j-1 >= 0 and mat[i-1][j-1] == 1){
            //markVisitedLand(mat, N, M, i-1, j-1);
    //}
    
    //if(i-1 >= 0 && j+1 < M and mat[i-1][j+1] == 1){
            //markVisitedLand(mat, N, M, i-1, j+1);
    //}
    
}



void print(vector<vector<int>> m){
    for(auto v:m){
        for(int e:v)
            cout << e <<' ';
        cout << endl;
    }
}

int countIsland(vector<vector<int>> m){
    int count = 0;
    int N = m.size();
    int M = m[0].size();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(m[i][j] == 1){
                ++count;
                m[i][j] = 2;
                markVisitedLand(m, N, M, i,j);
                //cout << i <<' ' <<j <<endl;
            }
        }
    }
    //print(m);

    cout << endl;
    return count;
}

int main(){
    //vector<vector<int>> m{
                            //{1,1,0,0},
                            //{0,0,1,0},
                            //{0,0,0,1},
                            //{0,1,0,0}
                        //};
    //vector<vector<int>> m{{0,0,0,1},{0,0,1,0},{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,0,1,0},{0,1,0,1}};
    vector<vector<int>> m {
                        {1,1,1,1,0},
                        {1,1,0,1,0},
                        {1,1,0,0,0},
                        {0,0,0,0,0}
                            };
    cout << countIsland(m) << endl;
}

