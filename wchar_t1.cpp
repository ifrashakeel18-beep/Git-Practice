#include <iostream>
using namespace std;

int main() {
    wchar_t ch;
    wcout << L"Enter a character: ";
    wcin >> ch;

    if (ch >= L'A' && ch <= L'Z')
        wcout << L"Uppercase letter" << endl;
    else if (ch >= L'a' && ch <= L'z')
        wcout << L"Lowercase letter" << endl;
    else if (ch >= L'0' && ch <= L'9')
        wcout << L"Digit" << endl;
    else
        wcout << L"Symbol" << endl;

    return 0;
}