#include <iostream>
using namespace std;

int main() {
   int n, reversed = 0;
   
   cout << " Enter an Integer : ";
   cin >> n;
   int original = n;
   
   while(n !=0){
   int digit = n % 10;
   reversed = reversed * 10 + digit;
   n/=10;
   }
   cout << "original number : " << original << endl;
   cout << "reversed number : " << reversed << endl;
   

    return 0;
}