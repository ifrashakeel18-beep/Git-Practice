#include <iostream>
using namespace std;

int main() {
    int x ;
    cout << "Enter a number: ";
    cin >> x ;
     
     bool ispositive = (x>0);
     bool isnegative = (x<0);
   
    if(ispositive){
    cout << " True " << endl;}
    else if(isnegative){
    cout << " False " << endl;}
    else {
    cout << " Not a number " << endl;}
   

    return 0;
}

