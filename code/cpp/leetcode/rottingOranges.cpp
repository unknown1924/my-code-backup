#include <bits/stdc++.h>
using namespace std;

int timeToRot(vector<vector<int>> a){
	queue<pair<int, int>> q;
    int fresh = 0;
    int time = -1;
    int m = a.size(), n = a[0].size();
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == 2) 
                q.push(make_pair(i,j));
            else if(a[i][j] == 1)
                ++fresh;
        }
    }
    if(fresh == 0) return 0;
    vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while(!q.empty()){
        time++;
        int size = q.size();
        for(int k = 0; k < size; k++){
            pair<int,int> c = q.front();
            fresh--;
            q.pop();

            for(int i = 0; i < 4; i++){
                int x = c.first + dir[i].first;
                int y = c.second + dir[i].second;
                if(x >= m or y >= n or x < 0 or y < 0 or a[x][y] != 1) continue;
                a[x][y] = 2;
                q.push(make_pair(x,y));
            }
        }
    }
    ++fresh;
    cout << fresh <<' '<<time <<endl;
    if(fresh <= 0)
        return time;
    return -1;
}


int main(){
    //vector<vector<int>> a{{2,1,1},{1,1,0},{0,1,1}};
    //vector<vector<int>> a{{2,1,1},{0,1,1},{1,0,1}};
    //vector<vector<int>> a{{1}, {2}, {2}};
    vector<vector<int>> a{{1, 0, 2, 2, 2}};
    cout << timeToRot(a) << endl;
}
