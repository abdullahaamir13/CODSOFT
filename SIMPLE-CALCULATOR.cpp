#include<iostream>
using namespace std;
int main(){
    cout<<"\t\t\tWelcome To SIMPLE CALCULATOR"<<endl;
    float a,b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;
    char op;
    cout <<"Enter operation (+,-,*,/): ";
    cin >> op;
    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a-b;
        break;
    case '*':
        cout << a << " x " << b << " = " << a*b;
        break;
    case 'x':
        cout << a << " x " << b << " = " << a*b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout <<"Wrong Input";
    }
    return 0;
}