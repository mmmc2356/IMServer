find_package(Qt6 REQUIRED COMPONENTS Core Widgets Network Sql)

file(GLOB_RECURSE CLIENT_SOURCES "*.cpp" "*.h")
add_executable(im_client ${CLIENT_SOURCES})
target_link_libraries(im_client PRIVATE im_common Qt6::Core Qt6::Widgets Qt6::Network Qt6::Sql)
