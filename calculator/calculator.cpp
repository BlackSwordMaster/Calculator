#include <iostream>
using namespace std;

int main() {
    char op;
    int num1, num2;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << (num1 + num2) << endl;
            break;
        case '-':
            cout << "Result: " << (num1 - num2) << endl;
            break;
        case '*':
            cout << "Result: " << (num1 * num2) << endl;
            break;
        case '/':
            // Adding a check to avoid division by zero
            if (num2 != 0) {
                cout << "Result: " << (num1 / num2) << endl;
            } else {
                cout << "Division by zero error!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
