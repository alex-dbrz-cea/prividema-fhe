# Create one shared lib for GGSW.
file(GLOB GGSW_SRCS "*.c")
add_library(GGSW SHARED ${GGSW_SRCS})

# As GGSW requires GLWE we have to link libGLWE to the libGGSW.
target_link_libraries(GGSW PUBLIC GLWE)

target_include_directories(GGSW INTERFACE ${PROJECT_SOURCE_DIR}/include/core/ggsw)

