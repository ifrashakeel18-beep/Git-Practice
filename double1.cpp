#include <iostream>
using namespace std;

int main() {
    double Radius,Area,Circumference;
    const double PI=3.14;
    
    cout << "Enter radius : ";
    cin >> Radius;
    
    Area=PI*(Radius*Radius);
    cout << "Area = " << Area << endl;
    
    Circumference=2*PI*Radius;
    cout << " Circumference = " << Circumference << endl;
    
    return 0;
}