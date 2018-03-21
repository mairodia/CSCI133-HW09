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
bool CComp<CompType>::operator==(const CComp & rhs) const
{
    if(m_data == rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompTyoe>
bool CComp<CompType>::operator<(const CComp &rhs) const
{
    if(m_data < rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompTyoe>
bool CComp<CompType>::operator>(const CComp &rhs) const
{
    if(m_data > rhs.m_data)
    {
        return true;
    }
    return false;
}

template <typename CompTyoe>
bool CComp<CompType>::operator!=(const CComp &rhs) const
{
    if(m_data != rhs.m_data)
    {
        return true;
    }
    return false;
}
