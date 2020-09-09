#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main(){
    // INPUTS
    int r = 10;
    int D[4] = {0, 25, 50, 75};
    int offset[4] = {0, 0, 0, 0};
    int v[4] = {1, 1, 1, 1};
    int T = 90;

    // VARIABLES
    float X[4]{0};
    float Y[4]{0};
    float theta[4]{0};

    // calculations for the first circle
    theta[0] = (offset[0]+v[0]*T)/(2*PI*r);
    X[0] = r * sin(theta[0]);
    Y[0] = r * cos(theta[0]);

    // calculations for the rest 3 circles
    float sum = 0;
    for(int i = 1; i < 4; i++){
        theta[i] = (offset[i] + v[i]*T)/(2*PI*r);
        X[i] = r * sin(theta[i]); Y[i] = r * cos(theta[i]);
        sum += sqrt(pow(X[i] - X[i-1], 2) + pow(Y[i] - Y[i-1], 2)) + (D[i]-D[i-1]);
    }
    cout << sum << endl;
}
