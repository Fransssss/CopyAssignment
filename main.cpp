// Fransiskus Agapa
// 9/6/22
// Practice make improvement - Have Fun !!!
// :)

// ================
// understanding how copy assignment works
// ================

#include <iostream>
#include "CopAs.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << endl;
    int digitInput;                 // user input

    // default const
    CopAs stObj;

    // setter and getter
    cout << "  Input an integer: ";
    cin >> digitInput;
    cout << endl;
    stObj.SetValue(digitInput);
    cout << stObj.GetValue() << endl;

    cout << endl;

    // create second class object to invokes copy constructor
    CopAs ndObj = stObj;                       // copy constructor called
    cout << ndObj.GetValue() << endl;
    cout << endl << "Input another integer: ";
    cin >> digitInput;
    cout << endl;
    ndObj.SetValue(digitInput);        // update value to show, it won't change other class object
    cout << ndObj.GetValue() << endl;

    cout << endl;

    // create third class object to invoke copy assignment
    CopAs rdObj;
    rdObj = ndObj;
    cout << rdObj.GetValue() << endl;        // display value of rdObj
    cout << endl << "Input another integer: ";
    cin >> digitInput;
    cout << endl;
    rdObj.SetValue(digitInput);
    cout << rdObj.GetValue() << endl << endl;

    return 0;
}
