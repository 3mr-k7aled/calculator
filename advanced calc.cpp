
#include <iostream>
using namespace std;

int main() {

    double num1, num2, result;
    char operation;
    char again;

    do {

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        cin >> num2;

        if (operation == '+') 
        {
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == '-')
        {
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == '*')
        {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == '/')
        {
            if (num2 == 0) 
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else 
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
        }
        else 
        {
            cout << "Error: Invalid operation." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> again;

    } 

    while (again == 'y' || again == 'Y');

    cout << "Calculator closed .... Thnaks" << endl;

    return 0;
}