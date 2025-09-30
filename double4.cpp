#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,root1,root2,discriminant;
    
    cout << " Enter the value of a , b and c :";
    cin >> a >> b >> c;
    
    discriminant=(pow(b,2)-4*a*c);
    root1 = (-b+sqrt(discriminant))/(2*a);
    root2 = (-b-sqrt(discriminant))/(2*a);

    cout <<  " Root1 = "<< root1 << endl;
    cout << " Root2 = " << root2 << endl;
    
    return 0;
}