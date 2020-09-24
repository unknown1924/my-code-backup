#include <iostream>
using namespace std;
void printKMax(int arr[], int n, int k)
{
    int j, max;

    for (int i = 0; i <= n - k; i++)
    {
        max = arr[i];

        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        cout << max << " ";
    }
    cout << endl;
}

int main(){
    int n = 8;
    int w = 5, wb = 3;
    int a[n]= {4,5,6,1,2,7,8,9};
    printKMax(a, n, w);
    cout << endl;
    printKMax(a, n, wb);
}
