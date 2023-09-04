#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "\t\t\tWelcome To SIMPLE CALCULATOR" << endl;
    cout << "Enter First Number:\t\t";
    cin >> a;
    cout << "Enter Second Number:\t\t";
    cin >> b;
    char op;
    cout << "Enter operator (+,-,*,/):\t";
    cin >> op;
    if (b == 0 && op == '/')
    {
        cout << "Warning!!! Division will give infinity value if second num == 0.\n";
        cout << "Please, Enter Second Number again:\t\t";
        cin >> b;
    }
    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " x " << b << " = " << a * b;
        break;
    case 'x':
        cout << a << " x " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout << "Wrong Input";
    }
    return 0;
}