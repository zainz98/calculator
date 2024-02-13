// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "**************calculator**************";

    char op;
    float num1, num2;
    cout << "enter the first number:";
    cin>> num1;
    cout << "enter operator (+,-,*,/):";
    cin >> op;
    cout << "enter the second number:";
    cin >> num2;

    switch (op)
    {
    case'+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
    case'-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
    case'*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case'/': {
        if (num2 == 0 || num1 == 0)
        {
            cout << "err";

        }
        else
        {
 cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
        } 
    }
        
   
    default:
        cout << "err! thr not correct";
    }
    cout << "**************end**************";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
