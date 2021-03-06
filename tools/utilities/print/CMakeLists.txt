#
# cmake file for print project
#

# define project
set(tool_name print)

set(src
    src/PrintArguments.cpp
    src/PrintGraph.cpp
    src/PrintModel.cpp
    src/main.cpp
)

set(include
    include/LayerInspector.h
    include/PrintArguments.h
    include/PrintGraph.h
    include/PrintModel.h
)

source_group("src" FILES ${src})
source_group("include" FILES ${include})

# create executable in build\bin
set(GLOBAL_BIN_DIR ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${GLOBAL_BIN_DIR})
add_executable(${tool_name} ${src} ${include})
target_include_directories(${tool_name} PRIVATE include ${ELL_LIBRARIES_DIR})
target_link_libraries(${tool_name} common model nodes passes utilities)
copy_shared_libraries(${tool_name})

set_property(TARGET ${tool_name} PROPERTY FOLDER "tools/utilities")
