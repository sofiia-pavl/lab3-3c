#include "Fraction.h"

int main()
{
    Fraction a, b;
    int option;

    do
    {
        cout << endl << endl;
        cout << "        |Choose an option|" << endl << endl;;
        cout << "1) Add first number" << endl;
        cout << "2) Add second number" << endl;
        cout << "3) ++ of first number" << endl;
        cout << "4) ++ of second number" << endl;
        cout << "5) -- of first number" << endl;
        cout << "6) -- of second number" << endl;
        cout << "7) Subtraction of first and second number :" << endl;
        cout << "8) Comparison of first and second number : " << endl;
        cout << "9) Number of objects created: " << endl;
        cout << "0) Exit the program" << endl;
        cout << " Enter: "; cin >> option;

        switch (option)
        {
        case 1:
            cin >> a;
            break;
        case 2:
            cin >> b;
            break;
        case 3:
            cout << endl << ++a << endl;
            break;
        case 4:
            cout << endl << ++b << endl;
            break;
        case 5:
            cout << endl << --a << endl;
            break;
        case 6:
            cout << --b << endl;
            break;
        case 7:
            cout << endl << a - b;
            break;
        case 8:
            a(a, b);
            break;
        case 9:
            cout<<Object::Count();
            break;
        default:
            exit(1);
        }
    } while (option != 0);

    return 0;
}