#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countchaos(vector<int> a){
    int n = a.size();
    int j = 0; bool ischaotic = false;
    int k = 0, m =0;
    for(int i = n-1; i >= 0; i--){
       //int j = searchindex(a, i); 
        cout << "\niteration #: " << i<< endl;
        j = find(a.begin(), a.end(), i+1) - a.begin();
        if(i-j >2){
            cout << "chaotic" << endl;
            cout << i << ' ' << j<< endl;
            ischaotic = true;
            break;
        }
       cout << i << ' ' << j;
       k += i - j;
       if(i-j > 0)
           m += i-j;
       cout <<' '<<k<<' '<<m<<endl;
    }
    if(!ischaotic)
        cout << m << endl;
}

void bubblechaos(vector<int> b){
    vector<int> a = b;
    int n = a.size();
    cout << n;
    int count = 0;
    for(int i =0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[j] > a[i]){
                int temp = a[i];
                a[i] = a[j]; a[j] = temp;
                ++count;
            }
        }
    }
    cout << endl << count;
}

int main(){
    vector<int> a{2,1,5,3,4};
    vector<int> c{1,2,5,3,4,7,8,6};
    vector<int> b{2,5,1,3,4};
    vector<int> d{1,2,5,3,7,8,6,4};
    //cout << countchaos(b)<< endl;
    bubblechaos(a);
    //countchaos(d);

}
