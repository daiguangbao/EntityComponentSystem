///-------------------------------------------------------------------------------------------------
/// File:	IShape.cpp.
///
/// Summary:	Declares the IShape interface.
///-------------------------------------------------------------------------------------------------


#include "IShape.h"

IShape::IShape()
{
	this->Initialize();
}

IShape::~IShape()
{
	this->Release();
}