#include <iostream>
using namespace std;

int main() {
   float weight,height,BMI;
   
   
   cout << " Enter your weight : ";
   cin >> weight;
   cout << " Enter your height : ";
   cin >> height;
   
   BMI = weight / (height*height);
   cout << " BMI " << BMI << endl;
   
   if(BMI<18.5)
   cout << " Category: Underweight " << endl;
   else if (BMI<25)
   cout << " Category: Normal weight " << endl;
   else if (BMI<30)
   cout << " Category: Overweight " << endl;
   else
   cout << " Category: Obese " << endl;
   

    return 0;
}