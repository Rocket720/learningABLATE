#include <iostream>

using namespace std;

/*
 * Creates a Four-Function Calculator in C++
 * I swear to god if anyone complains about efficiency...
 */

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

int main() {
    double x;
    char op;
    double y;
    double answer;

    cout << "Enter a value for x: " << endl;
    cin >> x;
    cout << "Enter a character for the operator (+, -, *, /): " << endl;
    cin >> op;
    cout << "Enter a value for y: " << endl;
    cin >> y;

    if (op == '+') { answer = add(x, y); }
    else if (op == '-') { answer = subtract(x, y); }
    else if (op == '*') { answer = multiply(x, y); }
    else if (op == '/') { answer = divide(x, y); }
    else {
        cout << "Invalid Operator" << endl;
        return -1;
    }

    cout << "The answer is " << answer << endl;
}
