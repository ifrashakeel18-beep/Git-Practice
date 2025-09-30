#include <iostream>
using namespace std;

int main() {
    int x ;
    cout << "Enter a number: ";
    cin >> x;
    bool even = (x % 2 == 0);
    
    if(even){
    cout << "even" << endl;}
    else {
    cout << "odd" << endl;}
   

    return 0;
}

