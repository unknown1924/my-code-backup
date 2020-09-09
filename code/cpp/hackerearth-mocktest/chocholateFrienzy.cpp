#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main(){
    vector<vector<int>> m = {{6,1,2,3,4,5},
                             {5,4,3,2,1,6},
                             {6,1,2,3,4,5},
                             {1,2,3,4,5,6},
                             {5,1,2,3,4,6},
                             {5,4,3,2,1,6}};
    int N = m.size();   int M = m[0].size();
    int L = *max_element(m[0].begin(), m[0].end());
    int y = distance(m[0].begin(), find(m[0].begin(), m[0].end(), L));
    int sec = M/3; int sum = 0, gsum = L;
    cout << "Largest pos "<<endl;
    for(int i = 1; i < N; i++){
        vector<int> s = m[i];
        if(y < sec){
        int temp2 = *max_element(s.begin() + sec, s.begin() + 2*sec); 
        int temp3 = *max_element(s.begin() + 2*sec, s.begin() + 3*sec); 
            sum = L + max(temp2, temp3);
            L = max(temp2, temp3);
            y = distance(s.begin(), find(s.begin(), s.end(), L));
            cout << "\nINDEX: "<<i<<endl;
            cout << L <<"  "<< y << endl;
            gsum += L;
        }
        else if(y >= sec and y < 2*sec){
        int temp1 = *max_element(s.begin(), s.begin()+sec); 
        int temp3 = *max_element(s.begin() + 2*sec, s.begin() + 3*sec); 
            sum = sum, L + max(temp1, temp3);
            L = max(temp1, temp3);
            y = distance(s.begin(), find(s.begin(), s.end(), L));
            cout << "\nINDEX: "<<i<<endl;
            cout << L <<"  "<< y << endl;
            gsum += L;
        }
        else{
        int temp1 = *max_element(s.begin(), s.begin()+sec); 
        int temp2 = *max_element(s.begin() + sec, s.begin() + 2*sec); 
            sum = sum, L + max(temp1, temp2);
            L = max(temp1, temp2);
            y = distance(s.begin(), find(s.begin(), s.end(), L));
            cout << "\nINDEX: "<<i<<endl;
            cout << L <<"  "<< y << endl;
            gsum += L;
        }
    }
    cout << endl<<gsum << endl;
}

    //for(int i = 1; i < N; i++){
        //vector<int> s = m[i];
        //int temp1 = *max_element(s.begin(), s.begin()+sec); 
        //int temp2 = *max_element(s.begin() + sec, s.begin() + 2*sec); 
        //int temp3 = *max_element(s.begin() + 2*sec, s.begin() + 3*sec); 
        //cout << "\n temp vals: "<<endl;
        //cout << temp1 <<' '<<temp2<<' '<<temp3<<endl;

        //if(y < sec){
            //sum = L + max(temp2, temp3);
            //L = max(temp2, temp3);
            //y = distance(s.begin(), find(s.begin(), s.end(), L));
            //LOG(i);
            //cout << L <<' '<<y << endl;
        //}
        //else if(y >= sec and y < 2*sec){
            //sum = sum, L + max(temp1, temp3);
            //L = max(temp1, temp3);
            //y = distance(s.begin(), find(s.begin(), s.end(), L));
            //LOG(i);
            //cout << L <<' '<<y << endl;
        //}
        //else{
            //sum = sum, L + max(temp1, temp2);
            //L = max(temp1, temp2);
            //y = distance(s.begin(), find(s.begin(), s.end(), L));
            //LOG(i);
            //cout << L <<' '<<y << endl;
        //}
        //gsum += max(gsum, sum);
        //sum = 0;
        //}
