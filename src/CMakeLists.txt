include("${_build_cmake_local}")

add_library(PiSubmarine.Api.Internal.I2CDriverConcept INTERFACE)
target_include_directories(PiSubmarine.Api.Internal.I2CDriverConcept INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../public")