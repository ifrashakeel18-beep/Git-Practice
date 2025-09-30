#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P,R,T,CI;
    
    cout << "Enter Principle : ";
    cin >> P;
    
    cout << "Enter Radius :";
    cin >> R;
    
    cout << "Enter Time :";
    cin >> T;
    
    CI=P*(pow(1+R/100,T)-1);
    
    cout << "CI = " << CI << endl;
    
    return 0;
}