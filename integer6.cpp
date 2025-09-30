#include <iostream>
using namespace std;

int main() {
   int n;
   int factorial = 1;
   
   cout << "Enter positive integer: " << endl;
   cin >> n;
    if(n<0){
    cout << " Factorial is not defined for negative numbers " << endl; 
    } else {
   for(int i=1 ; i <= n ; i++){
    
    factorial *=  i; }  //formula
   cout << n  << " ! = " << factorial;
    }
    return 0;
}