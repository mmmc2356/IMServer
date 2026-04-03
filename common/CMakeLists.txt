find_package(Qt6 REQUIRED COMPONENTS Core Network)

file(GLOB COMMON_SOURCES "*.cpp" "*.h")
add_library(im_common STATIC ${COMMON_SOURCES})
target_include_directories(im_common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(im_common PUBLIC Qt6::Core Qt6::Network)
