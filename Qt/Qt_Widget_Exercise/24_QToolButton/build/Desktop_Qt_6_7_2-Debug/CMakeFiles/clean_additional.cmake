# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "24_QToolButton_autogen"
  "CMakeFiles/24_QToolButton_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/24_QToolButton_autogen.dir/ParseCache.txt"
  )
endif()
