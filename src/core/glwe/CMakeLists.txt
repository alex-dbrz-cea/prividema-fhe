# Create one shared lib for GLWE
file(GLOB GLWE_SRCS "*.c")
add_library(GLWE SHARED ${GLWE_SRCS})
target_include_directories(GLWE INTERFACE ${PROJECT_SOURCE_DIR}/include/core/glwe)