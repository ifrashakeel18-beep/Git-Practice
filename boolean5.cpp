#include <iostream>
using namespace std;

int main() {
    int year ;
    cout << "Enter a year : ";
    cin >> year ;
     
     bool isleap = (year % 400 == 0 ) || (year % 4 == 0 && year % 100 != 0);
     
    if(isleap){
    cout << " True " << endl;}
    else {
    cout << " False " << endl;}
    
   

    return 0;
}

