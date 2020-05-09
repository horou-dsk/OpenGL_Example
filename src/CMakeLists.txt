include_directories(${PROJECT_SOURCE_DIR}/includes)

set(_ProjectDir "${PROJECT_SOURCE_DIR}/")

configure_file(
        "${PROJECT_SOURCE_DIR}/src/config.h.in"
        "${PROJECT_SOURCE_DIR}/src/config.h"
)

aux_source_directory(. DIR_SRCS)

#include_directories(.)

add_library(SRCS ${DIR_SRCS})
