#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <string>
#include <stack>

using namespace std;

int main()
{
 setlocale(LC_ALL, "Russian");

    string strokaVvoda;
    cout << "Enter a string: ";
    getline(cin, strokaVvoda);
    int last = strokaVvoda.length() - 1;
    stack <char> steck;

    for each(char c  in strokaVvoda)
    {
        steck.push(c);
    }
    cout << "Placed in a stack" << endl;
    while (!steck.empty())
    {
        if ((steck.top() == ')') || (steck.top() == '('))
            if ((steck.top() == '}') || (steck.top() == '{'))
                if ((steck.top() == ']') || (steck.top() == '['))
                {
                    cout << "Bracket \"" << steck.top() << "\" is present" << endl;

                }
        steck.pop();

    }

    cout << "Stack: ";
    while (!steck.empty())
    {

        cout << steck.top();

        steck.pop();

    }
    cout << strokaVvoda << endl;
    system("pause");
    return 0;
}
