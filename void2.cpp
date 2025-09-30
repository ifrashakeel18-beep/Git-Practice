#include <iostream>
using namespace std;

 void printSum(int a,int b) {
     int Sum = a+b;
   cout << "SUM = "  << Sum << endl;
 }
   int main(){
       int num1, num2;
       cout << "Enter two numbers:" << endl;
       cin >> num1 >> num2;
       
       printSum(num1,num2);

    return 0;
}