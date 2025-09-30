int main() {
    int age ;
    cout << "Enter your age: ";
    cin >> age;
     
     bool iseligible = (age>=18);
   
    if(iseligible){
    cout << " True " << endl;}
    else {
    cout << " False " << endl;}
   

    return 0;
}