#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxcount(vector<int> a, int b){
    sort(a.begin(), a.end());
    int sum = 0, i = 0, count = 0;
    for(int i = 0; i < a.size(); i++){
        if(sum + a[i] <= b){
            count += 1;
            sum += a[i];
        }
        else
            break;
    }
    return count;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n, b; cin >> n >> b;
        vector<int> a;
        for(int j = 0; j < n; j++){
            int temp; cin >> temp ;
            a.push_back(temp);
        }
        cout << "Case #"<<i+1<<": "<< maxcount(a, b) << endl;
    }
}
