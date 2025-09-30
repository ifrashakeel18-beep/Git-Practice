#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter positive integer: ";
    cin >> n;
    
    int sum = n*(n+1)/2;  //formula 
    cout << "Sum of first " << n << " Integers = " << sum << endl;

    return 0;
}