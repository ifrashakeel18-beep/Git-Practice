#include <iostream>
#include <cwctype>
using namespace std;

int main() {
    wchar_t ch;
    wcout << L"Enter a character: ";
    wcin >> ch;

    if (ch == L'A' || ch == L'E' || ch == L'I' || ch == L'O' || ch == L'U' && ch == L'a' || ch == L'e' || ch == L'i' ||  ch == L'o' || ch == L'u'){
    wcout << " Vowel "   << endl;}
    else {
     wcout <<" Consonant  " << endl;}

    return 0;
}
