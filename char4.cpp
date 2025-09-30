#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    
    if (ch>='0' && ch<='9')
    cout << " The character " << ch << " is a digit " << endl;
    else if((ch>='A' && ch<='Z' )|| (ch>='a' && ch<='z'))
    cout << " The character " << ch << " is a alphabet" << endl;
    else
    cout << " The character " << ch << " is a symbol " << endl;
    return 0;
}
