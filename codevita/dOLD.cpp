#include <bits/stdc++.h>
using namespace std;

// strings at index 0 is not used, it is to make array
// indexing simple
string one[] = { "", "one ", "two ", "three ", "four ",
				"five ", "six ", "seven ", "eight ",
				"nine ", "ten ", "eleven ", "twelve ",
				"thirteen ", "fourteen ", "fifteen ",
				"sixteen ", "seventeen ", "eighteen ",
				"nineteen " };

// strings at index 0 and 1 are not used, they is to
// make array indexing simple
string ten[] = { "", "", "twenty ", "thirty ", "forty ",
				"fifty ", "sixty ", "seventy ", "eighty ",
				"ninety " };

// n is 1- or 2-digit number
string numToWords(int n, string s)
{
	string str = "";
	// if n is more than 19, divide it
	if (n > 19)
		str += ten[n / 10] + one[n % 10];
	else
		str += one[n];

	// if n is non-zero
	if (n)
		str += s;

	return str;
}

// Function to print a given number in words
string convertToWords(long n)
{
	// stores word representation of given number n
	string out;

	// handles digits at ten millions and hundred
	// millions places (if any)
	out += numToWords((n / 10000000), "crore ");

	// handles digits at hundred thousands and one
	// millions places (if any)
	out += numToWords(((n / 100000) % 100), "lakh ");

	// handles digits at thousands and tens thousands
	// places (if any)
	out += numToWords(((n / 1000) % 100), "thousand ");

	// handles digit at hundreds places (if any)
	out += numToWords(((n / 100) % 10), "hundred ");

	if (n > 100 && n % 100)
		out += "and ";

	// handles digits at ones and tens places (if any)
	out += numToWords((n % 100), "");

	return out;
}
int countVowels(string word){
    char v[5] = {'a', 'e', 'i', 'o','u'};
    int count = 0;
    for(int i = 0 ; i<word.length(); i++){
        for(int j = 0; j < 5; j++){
            if(word[i] == v[j])
                ++count;
        }
    }
    return count;
}

// Driver code
int main()
{
	// long handles upto 9 digit no
	// change to unsigned long long int to
	// handle more digit number
    int k = 100;
    vector<string> words;
    words.push_back(convertToWords(0));
    for(int i =0 ; i <= k; i++){
        words.push_back(convertToWords(i));
    }
    words[100] = "hundred";
    vector<int> noOfVowels;
    for(int i = 0; i <= 100; i++){
        noOfVowels.push_back(countVowels(words[i]));
    }

    //cout <<"{";
    //for(int i = 0; i < words.size(); i++){
        //cout <<noOfVowels[i]<<',';
    //}
    //cout <<"}";

// ISKE UPAR ALL KACHRA NICHEK KA KAAM KA HAI!!!

    vector<string>w {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twentyone","twentytwo","twentythree","twentyfour","twentyfive","twentysix","twentyseven","twentyeight","twentynine","thirty","thirtyone","thirtytwo","thirtythree","thirtyfour","thirtyfive","thirtysix","thirtyseven","thirtyeight","thirtynine","forty","fortyone","fortytwo","fortythree","fortyfour","fortyfive","fortysix","fortyseven","fortyeight","fortynine","fifty","fiftyone","fiftytwo","fiftythree","fiftyfour","fiftyfive","fiftysix","fiftyseven","fiftyeight","fiftynine","sixty","sixtyone","sixtytwo","sixtythree","sixtyfour","sixtyfive","sixtysix","sixtyseven","sixtyeight","sixtynine","seventy","seventyone","seventytwo","seventythree","seventyfour","seventyfive","seventysix","seventyseven","seventyeight","seventynine","eighty","eightyone","eightytwo","eightythree","eightyfour","eightyfive","eightysix","eightyseven","eightyeight","eightynine","ninety","ninetyone","ninetytwo","ninetythree","ninetyfour","ninetyfive","ninetysix","ninetyseven","ninetyeight","ninetynine","hundred"};
    vector<int> nOfv {2,2,1,2,2,2,1,2,2,2,1,3,2,3,4,3,3,4,4,4,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,1,3,2,3,3,3,2,3,3,3,2,4,3,4,4,4,3,4,4,4,2,4,3,4,4,4,3,4,4,4,2,4,3,4,4,4,3,4,4,4,2};
    cout << nOfv.size()<<endl;
    int count = 0;

    int n = 5;
    //int n = 3;
    vector<int> inp{1,2,3,4,5};
    //vector<int> inp{7, 4,2};
    int sum = 0;
    // find total count of vowels
    for(int i = 0; i< inp.size(); i++){
        sum += nOfv[inp[i]];
    }
    cout << sum <<endl;
    bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(inp[i] + inp[j] == sum){
                cout << inp[i] <<' '<<inp[j]<<endl;
                // count the no of pairs equal to sum
                count += 1;
                found = true;
            }
        }
    }
    cout << words[count] <<' '<<endl;
    if(!found) cout << "NO";
	return 0;
}
