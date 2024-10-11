# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "22_QTabBar_autogen"
  "CMakeFiles/22_QTabBar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/22_QTabBar_autogen.dir/ParseCache.txt"
  )
endif()
