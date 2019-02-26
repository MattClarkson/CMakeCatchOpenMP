/*=============================================================================

  CMAKECATCHOPENMP: Demo project for OpenMP examples.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef mjcWin32ExportHeader_h
#define mjcWin32ExportHeader_h

/**
* \file mjcWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(CMAKECATCHOPENMP_STATIC)
  #ifdef CMAKECATCHOPENMP_WINDOWS_EXPORT
    #define CMAKECATCHOPENMP_WINEXPORT __declspec(dllexport)
  #else
    #define CMAKECATCHOPENMP_WINEXPORT __declspec(dllimport)
  #endif  /* CMAKECATCHOPENMP_WINEXPORT */
#else
/* linux/mac needs nothing */
  #define CMAKECATCHOPENMP_WINEXPORT
#endif

#endif
