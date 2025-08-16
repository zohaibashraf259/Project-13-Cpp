#include <iostream>
using namespace std;

int main () {
    int num1, num2, num3;

    cout << "Enter your Number 1: ";
    cin >> num1;

    cout << "Enter your Number 2: ";
    cin >> num2;

    cout << "Enter your Number 3: ";
    cin >> num3;

    if (num1 >= num2 &&  num1 >= num3)
    {
        cout << "The Greatest Number is " <<num1 <<endl;
    }
    
    else if (num2 >= num1 && num2 >= num3)
    {
        cout << "The Greatest Number is " <<num2 <<endl;
    }
    else 
    {
        cout << "The Greatest Number is " <<num3 <<endl;
    }
    
    return 0;
}
