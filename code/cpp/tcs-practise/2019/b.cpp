// NOT CORRECT SOLUTION
#include <bits/stdc++.h>
using namespace std;
int minVisibleBottle(vector<int> a){
    int n = a.size();
    int whichBottle = 0, countOfBottle = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > whichBottle){
            whichBottle = a[i];
            countOfBottle = 1;
        }
        else if(a[i] == whichBottle)
            countOfBottle += 1;
    }
    return countOfBottle;
}

int main(){
    vector<int> a{1,1,2,3,4,5,4};
    cout << minVisibleBottle(a)<<endl;

}
