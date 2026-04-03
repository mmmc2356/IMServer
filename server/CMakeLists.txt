find_package(Qt6 REQUIRED COMPONENTS Core Network Sql)

file(GLOB_RECURSE SERVER_SOURCES "*.cpp" "*.h")
add_executable(im_server ${SERVER_SOURCES})
target_link_libraries(im_server PRIVATE im_common Qt6::Core Qt6::Network Qt6::Sql)
