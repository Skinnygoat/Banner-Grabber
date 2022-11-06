#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char op;
    float n1, n2;

    cout << "Quick info: This calculator will be about sum, difference, product and quotient of two numbers" << endl;

    cout << "Enter one of the operators: +, -, *, /: ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    switch(op)
    {
        case '+':
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;

        case '-':
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;

        case '*':
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;

        case '/':
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        break;

        default:
        // If the operator is other than +, -, * or /, error massage is shown
        cout << "Error! Operator You've chosen is wrong!" << endl;
        break;
    }

    cout << "Thanks for participation" << endl;
    
    return 0;
}