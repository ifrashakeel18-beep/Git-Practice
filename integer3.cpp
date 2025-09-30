#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    if(a>b)
    cout << "largest Number = " << a << endl;
    else if(a<b)
    cout << "largest Number = " << b << endl;
    else
    cout << " Both numbers are equal " << endl;

    return 0;
}