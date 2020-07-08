// Calculator.cpp : Implementation of CCalculator

#include "pch.h"
#include "Calculator.h"


// CCalculator



STDMETHODIMP CCalculator::Add(LONG x, LONG y, LONG* ret)
{
	// TODO: Add your implementation code here
	*ret = x + y;
	return S_OK;
}


STDMETHODIMP CCalculator::Sum(LONG a, LONG z, LONG* ret)
{
	// TODO: Add your implementation code here

	*ret = 0;
	for (int i = a; i <= z; i++)
		(*ret )+= i;
	return S_OK;
}
