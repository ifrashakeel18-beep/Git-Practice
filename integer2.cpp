#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter a number:";
  cin >> a;
  
  if(a>0)
  cout << "The given number " << a << " is positive " ;
  else if (a<0)
  cout  << "The given number " << a << " is negative " ; 
  else
    cout  << "The given number " << a << " is zero " ; 


    return 0;
}