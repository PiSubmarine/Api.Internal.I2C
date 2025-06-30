include("${_build_cmake_local}")

add_library(PiSubmarine.Api.Internal.I2C INTERFACE)
target_include_directories(PiSubmarine.Api.Internal.I2C INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../public")