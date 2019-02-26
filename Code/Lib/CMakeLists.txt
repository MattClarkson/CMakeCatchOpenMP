#/*============================================================================
#
#  CMAKECATCHOPENMP: Demo project for OpenMP examples.
#
#  Copyright (c) University College London (UCL). All rights reserved.
#
#  This software is distributed WITHOUT ANY WARRANTY; without even
#  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#  PURPOSE.
#
#  See LICENSE.txt in the top level directory for details.
#
#============================================================================*/

set(CMAKECATCHOPENMP_LIBRARY_NAME cmakecatchopenmp)

set(CMAKECATCHOPENMP_LIBRARY_SRCS
  mjcBasicTypes.cpp
  mjcMyFunctions.cpp
  mjcException.cpp
)

set(CMAKECATCHOPENMP_LIBRARY_HDRS
  mjcExceptionMacro.h
)

add_library(${CMAKECATCHOPENMP_LIBRARY_NAME} ${CMAKECATCHOPENMP_LIBRARY_HDRS} ${CMAKECATCHOPENMP_LIBRARY_SRCS})

if(BUILD_SHARED_LIBS)
  if(WIN32)
    add_definitions(-DCMAKECATCHOPENMP_WINDOWS_EXPORT)
  endif(WIN32)
endif(BUILD_SHARED_LIBS)

target_link_libraries(${CMAKECATCHOPENMP_LIBRARY_NAME} PRIVATE ${ALL_THIRD_PARTY_LIBRARIES})

