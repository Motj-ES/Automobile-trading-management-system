# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\opp_final_project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\opp_final_project_autogen.dir\\ParseCache.txt"
  "opp_final_project_autogen"
  )
endif()
