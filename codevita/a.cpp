#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;  cin >> n;
    string s;   cin >> s;

    int countA = 0, countB = 0;
    int i = 0, j = 0;

    while (s[j] != '\0'){
        if (s[j] == 'A') countA++;
        else if (s[j] == 'B') countB++;

        j++;
    }
    while (s[i] == '-')
        i++;

    if (s[i] == 'A')
        countA += i;

    int beg = i;
    while(i < n){
        while (s[i] == '-' && i < n)
            i++;

        if (i == n)
            break;

        if (s[i] == 'A'){
            if (beg == i){
                i++;
                continue;
            }
            countA +=(i - beg - 1);
            beg = i;
            i++;
            continue;
        }
        beg = i;
        i++;
        while (s[i] == '-' && i < n)
            i++;

        if (i == n)
            countB +=(i - beg - 1);
        else {
            if (s[i] == 'A'){
                countA +=(i - beg - 1) / 2;
                countB +=(i - beg - 1) / 2;
                beg = i;
                i++;
            } 
            else
                countB = countB + (i - beg - 1);
        }

    }
    if(countA == countB)
        cout << "Coalition government" << endl;
    else{
        if(countA > countB)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
}

