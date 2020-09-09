#include <iostream>
using namespace std;

void printMatrix(int M, int N, int *t){
    for(int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
                //cout << t[i][j] << ' ';
                cout << *((t + i*N) + j) << ' ';
            }
            cout << endl;
    }
    cout << endl;
}

int main(){
    int n = 10, m = 4;
    int coins[m] = {2,3,5,6};
    int M = m+1, N = n+1;

    int t[M][N];

    for(int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
                if(j == 0)
                    t[i][j] = 1;
                else
                    t[i][j] = 0;
            }
    }
    // printMatrix(M,N,&t[0][0]);

    //fill matrix
    
    for(int i = 1; i < M; ++i){
        for(int j = 1; j < N; ++j){
            if( j >= coins[i-1]){
                t[i][j] = t[i-1][j] + t[i][j - coins[i-1]];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }


    // printMatrix(M,N,&t[0][0]);
    cout << t[m][n] << endl;
}
