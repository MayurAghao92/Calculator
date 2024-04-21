#include <iostream>
using namespace std;

void Oprations(int a, int b, int opt)
{
    switch (opt)
    {
    case 1:
        cout << "Addition is: " << a + b << endl;
        break;
    case 2:
        cout << "Subtraction is: " << a - b << endl;
        break;
    case 3:
        cout << "Multiplication is: " << a * b << endl;
        break;
    case 4:
        cout << "Division is: " << float(a) / float(b) << endl;
        break;

    default:
        cout << "Choose Correct Option!";
    }
}
int main()
{
    while (1)
    {
        int a, b;
        int opt;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "\nChoose an option: " << endl;
        cout << "1.Addition" << endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Division" << endl;
        cin >> opt;
        Oprations(a, b, opt);
    }
    return 0;
}