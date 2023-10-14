// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num1;
    int num2;
    int num3;
    string name;
    
    cout << "Welcome to Greatest Number App.."<< endl;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name<< endl;
    cout << "Please chose 3 numbers between 1 - 100" << endl;
    cin >> num1 >> num2 >> num3;
    cout << "you entered " << num1<< " "<< num2<<" "<<num3 << " and Greatest Number is ";
    
    if (num1> num2 && num1>num3 )
    cout << num1;
    else if (num2> num1 && num2>num3 )
    cout << num2;
    else if (num3> num1 && num3>num2 )
    cout << num3;
    else
    cout << "Something wrong please try again";
    
    
    return 0;
}