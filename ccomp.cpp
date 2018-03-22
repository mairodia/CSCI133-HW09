// ==================================================================
// File: ccomp.h
// ==================================================================
// Programmer: Jennifer King
// Date: 3/20/2018
// Project: CComp
// Professor: Scott Edwards
// Class: CSCI 133F | TR 9:30AM
// This is the implementation for the ccomp.cpp file.
// ==================================================================
#include <iostream>
#include "ccomp.h"
using namespace std;

template <typename CompType>
bool CComp<CompType>::operator==(const CComp<CompType>& rhs) const
{
    if(m_data == rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompType>
bool CComp<CompType>::operator<(const CComp<CompType>& rhs) const
{
    if(m_data < rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompType>
bool CComp<CompType>::operator>(const CComp<CompType>& rhs) const
{
    if(m_data > rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompType>
bool CComp<CompType>::operator!=(const CComp<CompType>& rhs) const
{
    if(m_data != rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompType>
istream& operator>>(istream& ins, CComp<CompType> &rhs)
{
    CompType inData;
    ins >> inData;
    rhs.SetData(inData);
    return ins;
}

template <typename CompType>
ostream& operator<<(ostream &outs, const CComp<CompType> &rhs)
{
    outs << rhs.GetData();
    return outs;
}
