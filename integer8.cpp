#include <iostream>
using namespace std;

int main() {
int n;
int reversed = 0;

cout << "Enter an integer: ";
cin >> n;
int original = n;

while (n!=0){
int digit = n%10;
reversed = reversed * 10 + digit;
 n/=10;
}
if (original == reversed)
 cout << " Palindrome " << endl;
 else
 cout << " Not a Palindrome" << endl;
  

    return 0;
}