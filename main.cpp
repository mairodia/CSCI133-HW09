// ============================================================================
// File: main.cpp (Spring 2018)
// ============================================================================
// Programmer: Jennifer King
// Date: 3/20/2018
// Project: CComp
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30AM
// This program demonstrates the use of a non-member template function, and a
// template class.  The template function is exercised with calls using both
// basic data types as well as instantiations of the template class.
// ============================================================================

#include    <iostream>
#include    "ccomp.h"
#include    "ccomp.cpp"
using namespace std;

// function prototypes
template <typename  CompType>
int     CompVals(const CompType  &valOne, const CompType  &valTwo);
template <typename  CompType>
void    ShowResult(int  result,  CompType  &lhs, const CompType  &rhs);


// ==== main ==================================================================
//
// ============================================================================

int     main()
{
    int                 result;

    // test the function template with simple chars
    char            charOne;
    char            charTwo;
    cout << "Enter the first character value: ";
    cin >> charOne;
    cout << "Enter the second character value: ";
    cin >> charTwo;
    result = CompVals(charOne, charTwo);
    ShowResult(result, charOne, charTwo);

    // test the function template with simple doubles
    double          doubleOne;
    double          doubleTwo;
    cout << "Enter the first double value: ";
    cin >> doubleOne;
    cout << "Enter the second double value: ";
    cin >> doubleTwo;
    result = CompVals(doubleOne, doubleTwo);
    ShowResult(result, doubleOne, doubleTwo);

    // test the function template with character objects
    CComp<char>     charObj1;
    CComp<char>     charObj2;
    cout << "Enter the first template character value: ";
    cin >> charObj1;
    cout << "Enter the second template character value: ";
    cin >> charObj2;
    result = CompVals(charObj1, charObj2);
    ShowResult(result, charObj1, charObj2);

    // test the function template with double objects
    CComp<double>   doubleObj1;
    CComp<double>   doubleObj2;
    cout << "Enter the first template double value: ";
    cin >> doubleObj1;
    cout << "Enter the second template double value: ";
    cin >> doubleObj2;
    result = CompVals(doubleObj1, doubleObj2);
    ShowResult(result, doubleObj1, doubleObj2);

    return  0;

}  // end of "main"



// ==== CompVals ==============================================================
//
// This template function compares the two formal parameters using relational
// operators.
//
// Input:
//      lhs      -- a const reference to the left operand
//
//      rhs      -- a const reference to the right operand
//
// Output:
//      If the left object is less than the right object, a value of -1 is
//      returned; if the right object is less than the left object, a value
//      of 1 is returned; if the objects are equal, a value of 0 is returned.
//
// ============================================================================

template <typename  CompType>
int     CompVals(const CompType  &lhs, const CompType  &rhs)
{
    if(lhs.GetData() < rhs.GetData())
    {
        return -1;
    }
    else if(lhs.GetData() > rhs.GetData())
    {
        return 1;
    }
    else if(lhs.GetData() == rhs.GetData())
    {
        return 0;
    }
}  // end of "CompValues"

// ==== ShowResult  ===========================================================
//
// This template function compares the two formal parameters using relational
// operators.
//
// Input:
//      result  -- an integer that represents the relationship between the
//                  lhs and rhs parameters; if 'compVal' is negative, then lhs
//                  is less than rhs, if it's positive, lhs is greater than rhs,
//                  and if it has a value of zero, lhs and rhs are equal
//
//      lhs      -- a const reference to the left operand
//
//      rhs      -- a const reference to the right operand
//
// Output:
//      If the left object is less than the right object, a value of -1 is
//      returned; if the right object is less than the left object, a value
//      of 1 is returned; if the objects are equal, a value of 0 is returned.
//
// ============================================================================

template <typename  CompType>
void    ShowResult(int  result,  CompType  &lhs, const CompType  &rhs)
{
    if(result == -1)
    {
        cout << lhs.GetData() << " is less than " << rhs.GetData() << endl;
    }
    if(result == 1)
    {
        cout << lhs.GetData() << " is more than " << rhs.GetData() << endl;
    }
    if(result == 0)
    {
        cout << lhs.GetData() << "is equal to " << rhs.GetData() << endl;
    }

}  // end of "ShowResult"
