# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "15_QScrollArea_autogen"
  "CMakeFiles/15_QScrollArea_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/15_QScrollArea_autogen.dir/ParseCache.txt"
  )
endif()
