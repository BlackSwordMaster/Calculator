#include <iostream>
using namespace std;

char Operator(){
    char op;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    return op;
}

void numbers(int& num1, int& num2){
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
}

void Calculator(int num1, int num2, char op){
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
}

int main(){
    int num1, num2;
    char op;

    op = Operator();
    numbers(num1, num2);

    Calculator(num1, num2, op);

    return 0;
}