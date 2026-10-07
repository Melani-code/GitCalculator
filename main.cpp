#include <iostream>
using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operation (+ or -): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> b;

    if (operation == '+') {
        cout << "Result: " << a + b << endl;
    } else if (operation == '-') {
        cout << "Result: " << a - b << endl;
    } else {
        cout << "Invalid operation." << endl;
    }

    return 0;
}