#include <iostream>
using namespace std;

int main(){
  char ch;
   cout<< "Enter a character: ";
   cin >> ch;
   
   if(ch>='A' && ch<='Z')
   cout << "Lower Case = " << char(ch+32) << endl;
   else if (ch>='a'&& ch<='z')
   cout << "Upper Case = " << char(ch-32) << endl;
   else 
   cout << "Not a character" << endl;
    
    return 0;
}