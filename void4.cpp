#include <iostream>
using namespace std;

// Function to reverse a number
void reverseNumber(int n) {
    int reversed = 0, original = n;

    while (n != 0) {
        int digit = n % 10;        // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        n /= 10;                   // remove last digit
    }

    cout << "Original Number: " << original << endl;
    cout << "Reversed Number: " << reversed << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    reverseNumber(num);  // call function

    return 0;
}
