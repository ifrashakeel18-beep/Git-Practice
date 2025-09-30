#include <iostream>
using namespace std;

int main() {
   float area , radius;
   const float PI=3.14;
   
   
   cout << " Enter radius of circle : ";
   cin >> radius;
   
   area = PI*(radius*radius);
   
   cout << " Area of circle = " <<  area  << endl;
   

    return 0;
}