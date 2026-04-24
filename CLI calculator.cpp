#include <iostream>
using namespace std;

int main() {
    int a, b, choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\n";
    cin >> choice;

    switch(choice) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4: cout << (float)a / b; break;
        default: cout << "Invalid";
    }
}
