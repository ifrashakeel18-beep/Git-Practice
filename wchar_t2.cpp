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

    else
        wcout << "Not a character" << endl;

    return 0;
}
