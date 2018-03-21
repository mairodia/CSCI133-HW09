// ==================================================================
// File: ccomp.h
// ==================================================================
// Programmer: Jennifer King
// Date: 3/20/2018
// Project: CComp
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30AM
// This is the header file for the ccomp.cpp file.
// ==================================================================
#include <iostream>

template <typename  CompType>
class   CComp
{
public:
    // overloaded operators
    bool    operator==(const CComp  &rhs) const;
    bool    operator<(const CComp  &rhs) const;
    bool    operator>(const CComp  &rhs) const;
    bool    operator!=(const CComp  &rhs) const;

    // accessor functions
    const CompType& GetData(void) const { return  m_data; }
    void            SetData(const CompType  &newData) { m_data = newData; }

private:
    CompType    m_data;
};
