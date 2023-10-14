#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int points;
    string name;
    
    cout << "Welcome to Points Check App.."<< endl;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name<< endl;
    cout << "Please enter your points" << endl;
    cin >> points;
    cout << "your Points is " << points << " and your Rank is ";
    
    if (points < 500 )
    cout << "Beginner";
    else if (points >= 500 && points < 1000 )
    cout << "Intermediate";
    else if (points >= 1000 )
    cout << "Master";
    else
    cout << "Something wrong please try again";
    
    
    return 0;
}