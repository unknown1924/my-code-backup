#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <chrono>


using namespace std;
using namespace std::chrono;
int getPairsCount(vector<int> a, int n, int sum){
    unordered_map<int, int> m;
    for (int i=0; i<n; i++)
        m[a[i]]++;
    int count = 0;
    for (int i=0; i<n; i++)
    {
        count += m[sum-a[i]];
        if (sum-a[i] == a[i])
            count--;
    }
    return count/2;
}

int main(){
auto start = high_resolution_clock::now();
    vector<string>words {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twentyone","twentytwo","twentythree","twentyfour","twentyfive","twentysix","twentyseven","twentyeight","twentynine","thirty","thirtyone","thirtytwo","thirtythree","thirtyfour","thirtyfive","thirtysix","thirtyseven","thirtyeight","thirtynine","forty","fortyone","fortytwo","fortythree","fortyfour","fortyfive","fortysix","fortyseven","fortyeight","fortynine","fifty","fiftyone","fiftytwo","fiftythree","fiftyfour","fiftyfive","fiftysix","fiftyseven","fiftyeight","fiftynine","sixty","sixtyone","sixtytwo","sixtythree","sixtyfour","sixtyfive","sixtysix","sixtyseven","sixtyeight","sixtynine","seventy","seventyone","seventytwo","seventythree","seventyfour","seventyfive","seventysix","seventyseven","seventyeight","seventynine","eighty","eightyone","eightytwo","eightythree","eightyfour","eightyfive","eightysix","eightyseven","eightyeight","eightynine","ninety","ninetyone","ninetytwo","ninetythree","ninetyfour","ninetyfive","ninetysix","ninetyseven","ninetyeight","ninetynine","hundred"};
    vector<int> noOfVowels {2,2,1,2,2,2,1,2,2,2,1,3,2,3,4,3,3,4,4,4,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,2,4,3,4,4,4,3,4,4,4,2,4,3,4,4,4,3,4,4,4,2,4,3,4,4,4,3,4,4,4,2};
    //cout << noOfVowels.size()<<endl;
    int n; cin >> n;
    vector<int> inp;
    for(int  i = 0; i < n; i++){
        int temp; cin >> temp; inp.push_back(temp);
    }
    sort(inp.begin(), inp.end());
    int countPairs = 0;
    int sumOfVowels = 0;
    for(int i = 0; i <n; i++){
        sumOfVowels += noOfVowels[inp[i]];
    }
    countPairs = getPairsCount(inp, n, sumOfVowels);
    cout << sumOfVowels <<endl;
    cout << countPairs <<endl;
    cout << words[countPairs];
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout << "\nTotal time taken"<<endl;
cout << duration.count()/1000000 << endl;
}
