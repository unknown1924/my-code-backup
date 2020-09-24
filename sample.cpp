#include <iostream>
#include <string>
using namespace std;

class TextInput
{
public:
    string s = "";
    string temp = "";
    void add(char c) {
        if(isalpha(c))
            s += c;
    }
    std::string getValue() {
        cout << s << temp;
        return temp;
    }
};

class NumericInput : public TextInput { 
public:
    void add(char c) {
        if(isdigit(c))
            temp += c;
    }
};

#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif
