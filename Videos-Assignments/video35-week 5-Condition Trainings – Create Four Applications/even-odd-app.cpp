#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int num;
    string name;
    
    cout << "Welcome to Even / Odd App.."<< endl;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name<< endl;
    cout << "Please chose a number between 1 - 100" << endl;
    cin >> num;
    cout << "you entered " << num << " and it is ";
    
    if (num%2 == 0)
    cout << "Zawgy" << endl;
    else
    cout << "Fardy" << endl;
    cout << "Thank you for choosen Even / Odd App!"<< endl;
    return 0;
}