#include <iostream>
using namespace std;

int main() {
   float SI,P,R,T;
   
   cout << " Enter Principle amount : ";
   cin >> P;
   cout << " Enter rate of interest : ";
   cin >> R;
   cout << " Enter time : ";
   cin >> T;
   
   SI = (P*R*T)/100;
   
   cout << " SI = " <<  SI  << endl;
   

    return 0;
}