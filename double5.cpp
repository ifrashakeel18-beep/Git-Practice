#include <iostream>
using namespace std;

int main() {
    double base, height, Area;
    
    cout << " Enter base of a triangle : ";
    cin >> base;
    cout << " Enter height of a triangle : ";
    cin >> height;
    
    Area = 0.5*base*height;

    cout <<  " Area of a triangle = "<< Area << endl;

    return 0;
}