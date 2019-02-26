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

set(_command_line_apps
  helloWorldBasic
  helloWorldImproved
  forLoopCalculatingPi
  forLoopReductionOnSum
  introducingLocks
  cpp11Example
)

if (NOT WIN32)
  list(APPEND _command_line_apps introducingTasks)
endif()

foreach(_app ${_command_line_apps})
  add_executable(${_app} ${_app}.cpp)
  target_link_libraries(${_app} ${CMAKECATCHOPENMP_LIBRARIES} ${ALL_THIRD_PARTY_LIBRARIES})
endforeach()
