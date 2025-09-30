#include <iostream>
using namespace std;

     void isEven(int a) {
     if (a%2 == 0){
     cout << a << " is Even";
         
     }
     }
     void isOdd(int a) {
      if (a%2 !=0){
     cout << a << " is Odd ";
    
   }
 }
   int main(){
       int num1;
       cout << "Enter a number:";
       cin >> num1;
       
       isEven(num1);
       isOdd(num1);
    return 0;
}