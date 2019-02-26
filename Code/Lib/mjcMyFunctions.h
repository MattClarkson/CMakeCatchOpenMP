/*=============================================================================

  CMAKECATCHOPENMP: Demo project for OpenMP examples.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef mjcMyFunctions_h
#define mjcMyFunctions_h

#include "mjcWin32ExportHeader.h"

/**
* \file mjcMyFunctions.h
* \brief Various Utilities.
* \ingroup utilities
*/
namespace mjc
{

/**
* \brief My first function, adds two integers.
*/
CMAKECATCHOPENMP_WINEXPORT int MyFirstAddFunction(int a, int b);

} // end namespace

#endif
