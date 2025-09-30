#include <iostream>
using namespace std;

int main() {
    int password ;
    cout << "Enter your password : ";
    cin >> password ;
     
     bool isTrue = (password == 3245);
     
    if(isTrue){
    cout << " True " << endl;}
    else {
    cout << " False " << endl;}
    
   

    return 0;
}

