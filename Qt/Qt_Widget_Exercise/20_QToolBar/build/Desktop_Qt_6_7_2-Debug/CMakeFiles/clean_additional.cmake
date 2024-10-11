# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "20_QToolBar_autogen"
  "CMakeFiles/20_QToolBar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/20_QToolBar_autogen.dir/ParseCache.txt"
  )
endif()
