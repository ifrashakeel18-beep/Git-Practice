#include <iostream>
#include <cwctype>
using namespace std;

int main() {
    wchar_t ch;
    wcout << L"Enter a character: ";
    wcin >> ch;

    if ((ch >= L'A' && ch <= L'Z' ) || (ch >= L'a' && ch <= L'z')){
    wcout << " Character "   << endl;}
    else if( ch >= L'0' && ch <= L'9') {
     wcout <<" Digit  " << endl;}
     else
     wcout << "It is a Symbol" <<  endl;

    return 0;
}

