#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    int sub(int num1, int num2) {
        return num1 - num2;
    }

    int mul(int num1, int num2) {
        return num1 * num2;
    }

    int div(int num1, int num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    int a, b;
    char operation;

    Calculator calc;

    cout << "Enter first element: ";
    cin >> a;
    cout << "Enter Second element: ";
    cin >> b;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << a << " + " << b << " = " << calc.add(a, b) << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << calc.sub(a, b) << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << calc.mul(a, b) << endl;
            break;
        case '/':
            cout << a << " / " << b << " = " << calc.div(a, b) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    return 0;
}

