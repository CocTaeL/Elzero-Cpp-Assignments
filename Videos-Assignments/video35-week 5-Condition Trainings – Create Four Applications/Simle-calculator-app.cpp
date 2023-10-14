#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num1;
    int num2;
    int op;
    
    
    cout << "Welcome to Simple Calculator App.."<< endl;
    cout << "Please enter first number" << endl;
    cin >> num1;
    cout << "Please enter the operation number" << endl;
    cout << "[1] +\n";
    cout << "[2] -\n";
    cout << "[3] *\n";
    cout << "[4] /\n";
    cin >> op;
    cout << "Please enter second number " << endl;
    cin >> num2;
    cout << "you enterd " << num1<< " " << op<< " " << num2 << " and the result is ";
    
    if(op == 1)
    cout << num1 + num2;
    else if (op == 2)
    cout << num1- num2;
    else if (op == 3)
    cout << num1*num2;
    else if (op == 4)
    cout << num1/num2;
    
   else
   cout << "--\nSomething wrong please try again";
    
   cout << "\n*************\nThank you for using Simple Calculator App!\n*************"; 
   
    return 0;
}