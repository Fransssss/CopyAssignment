// Fransiskus Agapa

#include "CopAs.h"
#include <iostream>

using std::cout;
using std::endl;

// default constructor
CopAs::CopAs()
{
    cout << "= Default Const Called =" << endl;
    _data = new int;                         // allocate new memory
    *_data = -1;
}

// set value
void CopAs::SetValue(const int& theData)
{
    cout << "= Set Val Called =" << endl;
    _data = new int;
    *_data = theData;
}

int CopAs::GetValue() const
{
    cout << "= Get Val Called =" << endl;
    return *_data;
}

// copy constructor
CopAs::CopAs(const CopAs& theData)
{
    cout << "= Copy Const Called =" << endl;
    _data = new int;
    *_data = *theData._data;
}

// copy assignment
CopAs& CopAs::operator=(const CopAs& theData)
{
    cout << "= Copy Assign Called =" << endl;
    if(this != &theData)                       // no self-assign / same value
    {
        delete _data;                          // free previous allocated memory
        _data = new int;                       // allocate new memory
        *_data = *theData._data;               // assign to a given data
    }

    return *this;                              // return the address of a class object
}

CopAs::~CopAs()
{
    cout << "= Destructor called =" << endl;
    delete _data;                             // free allocated memory
}
