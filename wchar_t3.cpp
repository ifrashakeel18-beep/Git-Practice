#include <iostream>
#include <cwctype>
using namespace std;

int main() {
    wchar_t ch;
    wcout << L"Enter a character: ";
    wcin >> ch;

    if (ch >= L'A' && ch <= L'Z'){
    wchar_t lower = ch+32;
    wcout << "Lower character = "  << lower << endl;}
    else if (ch >= L'a' && ch <= L'z'){
    wchar_t upper = ch-32;
     wcout <<"Upper Character = " << upper << endl;}

    else{
        wcout << "Not a character" << endl;}

    return 0;
}
