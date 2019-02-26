/*=============================================================================

  CMAKECATCHOPENMP: Demo project for OpenMP examples.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef mjcExceptionMacro_h
#define mjcExceptionMacro_h

#include "mjcException.h"

#define mjcExceptionThrow() throw mjc::Exception(__FILE__,__LINE__)

#endif
